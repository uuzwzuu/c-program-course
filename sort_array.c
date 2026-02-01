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

int main(int argc, char *argv[])
{
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
    int *a = (int *) malloc((length+1) * 4);

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

    print_array(a, length+1);

    return 0;
}

