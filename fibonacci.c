#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
    if (n==0) {return 0;}

    int memory_size = (n+1) * 4; 
    int *arr = (int *) malloc(memory_size);

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; ++i)
    {    
        arr[i] = arr[i-1] + arr[i-2];
    }

    int s = arr[n];

    //release memory
    free(arr);
    arr = NULL;

    return s;
}

int main(int argc, char *argv[])
{
    while (1 > 0)
    {
        printf("Which Fibonacci number do you want to know?\n");

        int n;
        scanf("%d", &n);

        printf("Your input is: %d\n", n);

        if (n < 0)
        {
            printf("Please input an interger >= 0.\n");
            return 1;
        }

        int a = fibonacci(n);

        printf("The %d-th fibonacci number is: %d\n", n, a);

        printf("Do you want to continue? Y/N\n");

        char c;
        scanf(" %c", &c);

        if (c == 'Y')
        {
            printf("Good, let's continue!\n");
        }
        else if (c == 'N')
        {
            printf("Goodbye\n");
            break;
        }
        else
        {
            printf("Sorry, I don't understand your input goodbye\n");
            break;
        }
    }

    return 0;
}





