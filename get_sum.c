#include<stdio.h>
#include<stdlib.h>

int get_sum(int n, int arr[])
{
    int curr_sum = arr[0];

    for (int i = 1; i < n; ++i)
    {
        int a = arr[i];

        curr_sum = a + curr_sum; 
    }


    return curr_sum;
}


int main(int argc, char * argv[])
{
    if (argc < 2)
    {
        printf("Input some integers like thus:\n");
        printf("%s 1 2 5 ...\n", argv[0]);
        return 1;
    }


    int n = argc - 1;


    int *arr = (int *) malloc(4 * n);
    
    for (int i=0; i<n; ++i)
    {
        arr[i] = atoi(argv[i+1]);
    }


    int s = get_sum(n, arr);
    printf("The sum is: %d\n", s);

    return 0;

}
