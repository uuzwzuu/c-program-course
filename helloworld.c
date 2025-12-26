#include<stdio.h>

int add()
{
    int a=5;
    int b=6;

    int c=a+b;

    return c;
}

int main ()
{
    int s = add();
    printf("%d",s);
    return 0;
}
