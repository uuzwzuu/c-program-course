#include<stdio.h>
#include<string.h>

void swap(char *x, char *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Please input an array\n");
        return 1;
    }

    char *c = argv[1];

    int x = strlen(c);

    int n = x/2;

    for(int i = 0; i < n; ++i)
    {
        swap(&c[i], &c[x - 1 - i]);  
    }

    printf("%s\n", c);
}
