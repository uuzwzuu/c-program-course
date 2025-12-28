#include<stdio.h>
#include<stdlib.h>

int find_min(int n, int arr[])
{
    int curr_min = arr[0];

    for (int i = 1; i < n; ++i)
    {
        int a = arr[i];

        if (a < curr_min) { curr_min = a; }
    }

    return curr_min;
}

int find_max(int n, int arr[])
{
    int curr_max = arr[0];

    for (int i = 1; i < n; ++i)
    {
        int a = arr[i];

        if (a > curr_max) { curr_max = a; }
    }
    
    return curr_max;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Input some integers like thus:\n");
        printf("%s 1 2 5 ...\n", argv[0]);
        return 1;
    }


    int n = argc - 1;


    int *arr1 = (int *) malloc(4 * n);
    
    for (int i=0; i<n; ++i)
    {
        arr1[i] = atoi(argv[i+1]);
    }

    int s = find_max(n, arr1);

    printf("The max value is: %d\n", s);

    int x = find_min(n, arr1);
    
    printf("The min value is: %d\n", x);

    free(arr1);

    arr1 = NULL;

    return 0;
}



