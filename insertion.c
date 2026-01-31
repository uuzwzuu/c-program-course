#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int array_insert(int * b, int len, int y)
{
    //insert y into array b[]

    // 1. find the location (index i)
    int j = 0;
    for(int i=0; i<len; ++i)
    {
        if(b[i] > y)
        {
            j = i;
            break;
        }
    } 

    // 2. copy b[i],b[i+1],.... to the right
    for(int i=len-2; i>=j; --i)
    {
        b[i+1] = b[i];
    }

    // 3. b[j] = y;
    b[j] = y;

    return 0;
}

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

    for (int i=0; i<length+1; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int x = atoi(argv[2]);
    array_insert(a, length+1, x);

    for (int i=0; i<length+1; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    free(a); a = NULL;

    return 0;
}
