#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("init error!\n");
        return 1;
    }

    char x = argv[1][0];

    char y;

    while(1)
    {
        printf("input char:\n");
        scanf(" %c", &y);
        
        if(y != x)
        {
            printf("Wrong!\n");
        }
        else
        {
            printf("Correct.\n");
            break;
        }
        printf("----\n");
    }
    return 0;
}
