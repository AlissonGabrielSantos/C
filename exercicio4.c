#include <stdio.h>

int main()
{
    unsigned char t;
    int i;
    for (i = 0; i <= 0xF; i++)
    {
        printf("%2X", i);
    }
    printf("\n");
    for (i = 0, t = 0; i <= 255; i++, t++)
    {
        t > 32 ? printf("%2c", t) : printf("%2c", 32);

        if (t % 16 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
