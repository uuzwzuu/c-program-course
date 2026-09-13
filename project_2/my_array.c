#include<string.h>
#include<stdlib.h>

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
