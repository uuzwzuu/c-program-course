#include<stdio.h>
#include<stdlib.h>

int fibonacci(int m, int n, int *arr)
{
    // input args:
    // m: the max n-th F sequence already computed;
    // n: the n-th F sequence that needs to be computed;
    // arr: the memory space to store the F sequence;

    if (n==0) {return 0; } 

    arr[0] = 0;
    arr[1] = 1;

    int start = m+1;
    
    if (start < 2) {start = 2;}

    for (int i = start; i <= n; ++i)
    {    
        arr[i] = arr[i-1] + arr[i-2];
        printf("f(%d)=%d\n", i, arr[i]);
    }

    return arr[n];
}

int main(int argc, char *argv[])
{
    int max_num = 46;
    int memory_size = (max_num + 1) * 4;
    int *arr = (int *) malloc(memory_size);

    int max_computed =0;

    while (1)
    {
        printf("Which Fibonacci number do you want to know?\n");
        printf("Please input ->: ");

        int n;
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Please input an interger >= 0.\n");
            return 1;
        }
        if (n > max_num)
        {
            printf("Please input an interger <= %d.\n", max_num);
            return 1;
        }
        
        int a = 0;

        if (n > max_computed)
        {
            a = fibonacci(max_computed, n, arr);
            max_computed = n;
        }
        else
        {
            a = arr[n];
        }

        printf("The %d-th Fibonacci number is: %d\n", n, a);

        printf("Do you want to continue? Y/N\n");

        char c;
        scanf(" %c", &c);

        if (c == 'Y')
        {
            printf("Good, let's continue!\n");
        }
        else if (c == 'N')
        {
            printf("Goodbye!\n");
            break;
        }
        else
        {
            printf("Sorry, I don't understand your input. Goodbye!\n");
            break;
        }
    }

    printf("Your Fibonacci journey ended!\n");

    // release memory
    free(arr);
    arr = NULL;

    return 0;
}





