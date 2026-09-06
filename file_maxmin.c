#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find_max(int * arr, int n)
{
    int max = arr[0];

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int * arr, int n)
{
    int min = arr[0];

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int buf2arr(char * buf, int * arr)
{
    char delims[] = ",";

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
