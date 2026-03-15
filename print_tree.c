#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool should_print(int i, int j)
{

    return true;
}

int main(int argc, char *argv[])
{
    
    if (argc != 2)
    {
        printf("please input one positive integer\n");
        return 1;
    }     

    int h = atoi(argv[1]);
    printf("This tree's height:%d\n", h*2);
    return 0;
}
