#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("No init file provided.\n");
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
        return 3;
    }
    fclose(fp);

    return 0;
}
