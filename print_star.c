#include<stdio.h>
#include<stdlib.h>

int print_triangle(int row)
{
    for (int j=0; j<row; ++j)
    {
        for (int k=0; k<row-1-j; ++k)
        {
            printf(" ");
        }
        for (int i=0; i<2*j+1; ++i)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("please input one positive integer\n");
        return 1;
    }

    int a = atoi(argv[1]);
    print_triangle(a);
    return 0;
}

