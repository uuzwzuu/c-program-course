#include<stdio.h>
#include"my_array.h"

void print_array(int *arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 
