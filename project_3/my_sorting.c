#include"my_sorting.h"

void swap(int *x, int *y)
{
    int t = *x;

    *x = *y;

    *y = t;
}

int min_idx(int *arr, int start, int len)
{
    int m = arr[start];
    int idx = start;

    for(int i = start; i < start + len; ++i)
    {
        if(m > arr[i])
        {
            m = arr[i];
            idx = i;
        }
    }
    return idx;
}

void bubble_sort(int *arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        int idx = min_idx(arr, i, len-i);
        swap(&arr[i], &arr[idx]);
    }
}
