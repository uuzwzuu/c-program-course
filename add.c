#include<stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
   /* This function takes in 2 parameters,
    * and return the sum od the two 
    */

    int c=a+b;

    return c;

}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("please input 2 integers, like this:\n");
        printf("%s 1 2\n", argv[0]);
        return 1;
    }

    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    int s=add(a, b);

    printf("%d+%d=%d\n",a,b,s);
   
    return 0;
}
