#include"my_sorting.h"
#include<stdio.h>

int main(int argc, char *argv[])
{
    int arr[5] = {6, 2, 9, 8, 1};

    for(int i = 0; i < 4; ++i)
    {
        int idx = min_idx(arr, i, 5-i);
        swap(&arr[i], &arr[idx]);
    }

    for(int i = 0; i < 5; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


