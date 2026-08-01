#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("init error\n");
        return 1;
    }

    int a[argc - 1];
    
    for(int i = 0; i < argc - 1; ++i)
    {
        a[i] = atoi(argv[i + 1]);
    }

    int b;
    printf("input integer:\n");
    int s = scanf(" %d", &b);

    if(s != 1)
    {
        printf("Wrong input!\n");
        return 2;
    }

    int sum = 0;
    for(int i = 0; i < argc - 1; ++i)
    {
        sum = sum + a[i];
    }
   
    int r = sum * b;
    printf("%d * %d = %d\n", sum, b, r);

    return 0;
}
