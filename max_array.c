#include<stdio.h>
#include<stdlib.h>

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

    if (argc > 21)
    {
        printf("Don't input more than 20 integers!\n");
        return 1;
    }

    int arr[] =
    {
        0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0
    };
    
    for (int i=1; i<argc; ++i)
    {
        arr[i-1] = atoi(argv[i]);
    }
    int n = argc - 1;

    int s = find_max(n, arr);

    printf("The max value is: %d\n", s);

    return 0;
}



