#include<stdio.h>
#include<stdlib.h>

int print_space(int n)
{
    for (int i=0; i<n; ++i)
    {
        printf(" ");
    }
    return 0;
}

int print_char(int n, char c)
{
    for (int i=0; i<n; ++i)
    {
        printf("%c", c);
    }
    return 0;
}

int print_triangle(int row, char c)
{
    for (int i=0; i<row; ++i)
    {
        print_space(row-1-i);
        print_char(2*i+1, c);
        printf("\n");
    }
    return 0;
}

int print_reverse_triangle(int row, char c)
{
    for(int i=0; i<row; ++i)
    {
        print_space(i+1);
        print_char(2*row-1-2*i, c);
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

    char c = '*';
    int a = atoi(argv[1]);
    print_triangle(a, c);
    print_reverse_triangle(a-1, c);
    return 0;
}

