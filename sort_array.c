#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_array(int *a, int len)
{
    for (int i=0; i<len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

int min_value_location(int *a, int len)
{
    int j=0;
    int m=a[0];
    for(int i=0; i<len; ++i)
    {
        if (a[i]<m)
        {
            m=a[i];
            j=i;
        }
    }
   // printf("The min value is %d\n", m);
   // printf("The index is %d\n", j);

    int x=a[0];
    a[0]=m;
    a[j]=x;

    //print_array(a, len);

    return 0;
}

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Please input a comma-separated array and a number!\n");
        return 1;
    }
    int n = strlen(argv[1]);
    int comma_count = 0;
    for (int i=0; i<n; ++i)
    {
        if (argv[1][i] == ',')
        {
            comma_count = comma_count + 1;
        }
    }

    //printf("Total Number: %d\n", comma_count);

    int length = comma_count +1;
    int *a = (int *) malloc(length * 4);

    a[0] = atoi(&argv[1][0]);
    int j = 1;

    for (int i=0; i<n; ++i)
    {
        if (argv[1][i] == ',')
        {
            a[j] = atoi(&argv[1][i+1]);
            j += 1;
        }
    }

    print_array(a, length);
    
    for(int i=0; i<length-1; ++i)
    {
        min_value_location(a+i, length-i);
    }

    print_array(a, length);

    return 0;
}

