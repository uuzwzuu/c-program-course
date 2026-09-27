#include<stdio.h>
#include"my_sorting.h"
#include"my_array.h"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("init error!\n");
        return 1;
    }

    char * filename = argv[1];
    FILE * fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File %s not found.\n", filename);
        return 2;
    }

    char buf[10000];
    char * p = fgets(buf, sizeof(buf), fp);

    while(p != NULL)
    {
        int arr[10000];
        int len = buf2arr(buf, arr);
        print_array(arr, len);
        bubble_sort(arr, len);
        print_array(arr, len);
        printf("len = %d\n", len);
        p = fgets(buf, sizeof(buf), fp);
    }

    fclose(fp);

    return 0;
}


