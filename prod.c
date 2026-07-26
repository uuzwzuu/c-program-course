#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("initialization error!\n");
        return 1;
    }

    int x = atoi(argv[1]);

    char y;

    printf("input an integer:"); 
    scanf("%c", &y);

    if (y < '0' || y > '9')
    {
        printf("Wrong input!\n");
        return 2;
    }

    int a = atoi(&y);
    
    int z = x * a;

    printf("%d * %d = %d\n", x, a, z);

    return 0;
}

