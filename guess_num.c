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

    int y;

    while(1)
    {
        printf("your guess:");

        int a = scanf("%d", &y);
 
        if(a != 1)
        {
            printf("Wrong input!\n");
        }
        else if(x > y)
        {
            printf("n > %d\n", y);
        }
        else if(x < y)
        {
            printf("n < %d\n", y);
        }
        else
        {
            printf("Correct!\n");
            break;
        }
    }
    return 0;
}
