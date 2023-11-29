#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    int codigo;
    char nome[50];
    long nascimento; // timestamp
    char cidade[30];
    char uf[3];
} CLIENTE;

long str2date(const char str[]) {
    struct tm tm;
    time_t seconds;
    int aux;
    if (str == NULL) {
        printf("null argument\n");
        return (long)-1L;
    }
    tm.tm_hour=0;
    tm.tm_min=0;
    tm.tm_sec=0;
    aux = sscanf(str, "%d/%d/%d", &tm.tm_mday, &tm.tm_mon, &tm.tm_year);
    if (aux != 3) {
        printf("formato de data desconhecido (%s - )\n", str);
        return (long)-1;
    }
    tm.tm_year -= 1900;
    tm.tm_mon -= 1;
    tm.tm_isdst = -1;
    seconds = mktime(&tm);
    if (seconds == (time_t)-1) {
        printf("falha ao ler a data no formato: %s\n", str);
        printf("%s ==> %d - %d - %d   r=%d\n",str, tm.tm_mday, tm.tm_mon, tm.tm_year, aux);
    }
    return seconds;
}

void salvaDados(const char arqnome[], CLIENTE dados[], int numRegistros) {
    FILE *fp;
    if( (fp=fopen(arqnome,"wb")) == NULL ) {
        printf("nao foi possivel criar o arquivo %s\n",arqnome);
        return;
    }
    fwrite((void *)dados,sizeof(CLIENTE),numRegistros,fp);
    fclose(fp);
}


void salvaIndice(const char arqnome[], int dados[], int numRegistros) {
    FILE *fp;
    if( (fp=fopen(arqnome,"wb")) == NULL ) {
        printf("nao foi possivel criar o arquivo %s\n",arqnome);
        return;
    }
    fwrite((void *)dados,sizeof(int),numRegistros,fp);
    fclose(fp);
}


int main()
{
    int i,troca;
    time_t     agora;
    time_t     auxTime;
    struct tm *newtime;
    long anos;
    int indNome[10],indIdade[10],aux;

    CLIENTE clientes[] = {
        { 1,"Douglas", str2date("02/01/1970"),"Curitiba","PR" },
        { 2,"Berenice",str2date("01/12/1991"),"Florianopolis","SC" },
        { 3,"Zoraide", str2date("31/12/1990"),"Belo Horizonte","MG" },
        { 4,"Maria",   str2date("01/01/1970"),"Londrina","PR" },
        { 5,"Joao",    str2date("28/11/2004"),"Curitiba","PR" },
        { 6,"Alice",   str2date("22/07/1972"),"Maringa","PR" },
        { 7,"Carlos",  str2date("06/03/1976"),"Cascavel","PR" },
        { 8,"Juliana", str2date("04/05/1975"),"Sao Paulo","SP" },
        { 9,"Jose",    str2date("06/03/1976"),"Maringa","PR" },
        {10,"Lucas",   str2date("20/01/1999"),"Sao Paulo","SP" },
    };
    // data e hora
    time(&agora);
    for(i=0 ; i<10 ; i++) {
        auxTime = (time_t)clientes[i].nascimento;
        newtime = localtime(&auxTime);
        anos = agora-auxTime;
        anos = anos/60/60/24/365;

        printf("%s\t%ld\t idade %ld\t",clientes[i].nome,clientes[i].nascimento,anos);
        printf("%s\n",asctime(newtime));
    }
    for(i=0 ; i<10; i++) {
        indNome[i] = i;
        indIdade[i] = i;
    }
    // ordena pelo nome
    do {
        troca = 0;
        for(i=0 ; i<9 ; i++) {
            if(strcmp(clientes[indNome[i]].nome,clientes[ indNome[i+1] ].nome)>0 ) {
                aux = indNome[i];
                indNome[i] = indNome[i+1];
                indNome[i+1] = aux;
                troca=1;
            }
        }
    } while( troca );

    // ordena pelo nascimento
    do {
        troca = 0;
        for(i=0 ; i<9 ; i++) {
            if( clientes[indIdade[i]].nascimento > clientes[ indIdade[i+1] ].nascimento ) {
                aux = indIdade[i];
                indIdade[i] = indIdade[i+1];
                indIdade[i+1] = aux;
                troca=1;
            }
        }
    } while( troca );

    printf("Lista dos clientes por ordem alfabetica:\n");
    for(i=0 ; i<10 ; i++) {
        printf("%s\n",clientes[  indNome[i] ].nome);
    }

    printf("Lista dos clientes por ordem alfabetica:\n");
    for(i=0 ; i<10 ; i++) {
        auxTime = (time_t)clientes[ indNome[i] ].nascimento;
        newtime = localtime(&auxTime);
        anos = agora-auxTime;
        anos = anos/60/60/24/365;
        printf("%-50s\t%ld\n",clientes[  indNome[i] ].nome, anos);
    }

    printf("Lista dos clientes por ordem de idade (do mais velho para o mais novo):\n");
    for(i=0 ; i<10 ; i++) {
        auxTime = (time_t)clientes[ indIdade[i] ].nascimento;
        newtime = localtime(&auxTime);
        anos = agora-auxTime;
        anos = anos/60/60/24/365;
        printf("%-50s\t%ld\n",clientes[  indIdade[i] ].nome, anos);
    }

    salvaDados("clieneclaramos a1 como sendo umates.dat",clientes,10);
    salvaIndice("clinome.ind",indNome,10);
    salvaIndice("clinasc.ind",indIdade,10);

    return 0;
}