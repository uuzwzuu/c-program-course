#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Please load one file\n");
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
    char * p = fgets(buf, 100, fp);

    if(p != NULL)
    {
        printf("%s\n", buf);
    }
    else
    {
        printf("reading error.\n");
        fclose(fp);
        return 3;
    }

    char delims[] = ",";

    int sum;

    int y = 0;

    char * token = strtok(buf, delims);

    while(token != NULL)
    {
        int x = atoi(token);
        y = y + 1;
        sum = sum + x;
        token = strtok(NULL, delims);
    }

    printf("count: %d\n", y);

    printf("sum: %d\n", sum);

    fclose(fp);

    return 0;
}

