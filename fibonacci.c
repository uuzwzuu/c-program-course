#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n, int *arr)
{
    if (n==0) {return 0; } 

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; ++i)
    {    
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n];
}

int main(int argc, char *argv[])
{
    int max_num = 46;
    int memory_size = (max_num + 1) * 4;
    int *arr = (int *) malloc(memory_size);

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

        int a = fibonacci(n, arr);

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





