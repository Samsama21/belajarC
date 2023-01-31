#include <stdio.h>

int main()
{
    float datasuhu = 33;
    float suhu_terkena_covid = 40.9;
    if (datasuhu > suhu_terkena_covid)
    {
        printf("saya terbakar\n");
    }
    if (datasuhu > 37)
    {
        printf("saya terkena covid\n");
    }
    else
    {
        printf("saya sehat\n");
    }

    printf("suhu saya : %f", datasuhu);
    return 0;
}