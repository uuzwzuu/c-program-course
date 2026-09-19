#include"my_sorting.h"
#include<stdio.h>

int main(int argc, char *argv[])
{
    int x = 5;

    int y = 3;

    printf("%d, %d\n", x,y);

    swap(&x,&y);

    printf("%d, %d\n", x,y);
}
