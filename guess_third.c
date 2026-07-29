#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("init error!\n");
        return 1;
    }

    int a = atoi(argv[1]);

    int b = atoi(argv[2]);

    int c;

    while(1)
    {
        printf("input 1 integers:");
        int s = scanf(" %d", &c);
        
        if(s != 1)
        {
            printf("Not integer!\n");
        }
        else if (a + c != 2 * b)
        {
            printf("Wrong!\n");
        }
        else
        {
            printf("Correct! %d %d %d\n", a, b, c);
            break;
        }
    }
    return 0;
}
