#include<stdio.h>
#include"my_sorting.h"
#include"my_array.h"

int main(int argc, char *argv[])
{
    int arr[5] = {6, 2, 9, 8, 1};

    print_array(arr, 5);

    bubble_sort(arr, 5);

    print_array(arr, 5);

    return 0;
}


