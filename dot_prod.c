#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myarray.h"

int contra(int *va, int la, int *vb, int lb)
{

    result = 0;
    return result;
}

int read_file(char * filename)
{
    FILE * fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return 1;
    }

    char buf[255];

    // 1
    char * p = fgets(buf,sizeof(buf),fp);

    int va[100];
    int la = 0;

    char * token=strtok(buf, ",\n");

    while(token!=NULL)
    {
        va[la] = atoi(token);
        la += 1;

        token=strtok(NULL,",\n");
    }
    
    printf("First vector, %d elements:\n", la);
    print_array(va, la);

    //2
    p = fgets(buf,sizeof(buf),fp);

    int vb[100];
    int lb = 0;

    token=strtok(buf, ",\n");

    while(token!=NULL)
    {
        vb[lb] = atoi(token);
        lb += 1;

        token=strtok(NULL,",\n");
    }

    printf("Second vector, %d elements:\n", lb);
    print_array(vb, lb);
    fclose(fp);
    return 0;

}

int main(int argc, char* argv[])
{

    if (argc < 2)
    {
         printf("Please input a filename!\n");
         return 1;
    }

    char * filename = argv[1];

    read_file(filename);

    return 0;
}
