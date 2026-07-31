#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("init error!\n");
        return 1;
    }

    int x = atoi(argv[1]);
    int es = 0;
    int os = 0;

    for(int i = 1; i < argc; ++i)
    {
        int x = atoi(argv[i]);

        if(x % 2 == 0)
        {
            //even;
            es = es + x;
        }
        else
        {
            //odd;
            os = os + x;
        }
    }
    
    printf("odd sum: %d\n", os);
    printf("even sum: %d\n", es);
    return 0;
}
