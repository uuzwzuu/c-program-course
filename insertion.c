#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    // arg 1 : comma separated sorted numbers like 1,3,5,7,9
    //         argv[1][] = "1,3,5,17,29,105"
    // arg 2 : the number to be inserted 
    // output : a sorted way

    if (argc < 3)
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

    printf("Total Number: %d\n", comma_count);

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

    for (int i=0; i<length; ++i)
    {
        printf("%d\n", a[i]);
    }

    free(a); a = NULL;

    return 0;
}
