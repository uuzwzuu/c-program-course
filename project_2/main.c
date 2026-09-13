#include<stdio.h>
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

    char buf[100];
    char * p = fgets(buf, sizeof(buf), fp);

    while(p != NULL)
    {
        int arr[100];
        int len = buf2arr(buf, arr);
        int max = find_max(arr, len);
        int min = find_min(arr, len);
        printf("max = %d, min = %d\n", max, min);
        p = fgets(buf, sizeof(buf), fp);
    }

    fclose(fp);

    return 0;
}

