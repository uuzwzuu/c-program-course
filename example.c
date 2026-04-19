#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    if (argc < 2)
    {
        printf("Input some integers:\n");
        return 1;
    }

    int n = argc - 1;

    int *arr = (int *) malloc(4 * n);

    for (int i=0; i<n; ++i)
    {
        arr[i] = atoi(argv[i+1]);
    }

    for (int i=0; i<n; ++i)
    {
        if(i%3 == 2)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    for (int i=0; i<n; ++i)
    {
        if(i%3 == 2)
        {
            printf("%d ", arr[i]*3);
        }
    }
    printf("\n");



    free(arr);
    arr = NULL;

    return 0;
}
