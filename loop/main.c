#include <stdio.h>

void main()
{
    char namahari[3][7] = {"jumat", "sabtu", "minggu"};
    int a = 5;
    int b;
    // while (b < a)
    // {
    //     printf("Halo %d\n", b);
    //     b = b + 1;
    // }
    for (int i = 0; i < 3; i++)
    {
        printf("Halo %s\n", namahari[i]);
    }
}