#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_array.h"

void print_array(int *arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int buf2arr(char * buf, int * arr)
{
    char delims[] = " ,\n";

    char * token = strtok(buf, delims);
    int i = 0;

    while(token != NULL)
    {
        int x = atoi(token);

        arr[i++] = x;

        token = strtok(NULL, delims);
    }

    return i;
}
 
