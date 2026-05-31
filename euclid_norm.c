#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myarray.h"
#include<math.h>

// 1) read all vectors from a file
// 2) calculate the norm for each vector
// 3)
// 4)
// 5)

double euclid_norm(int *v, int len)
{
    double total = 0;

    double x;

    for(int i=0; i<len; ++i)
    {
        x = v[i] * v[i];

        total = total + x;
    }
    
    return sqrt(total);
}

int get_vector (int *v, char *buf)
{
     int len = 0;

     char * token=strtok(buf, ",\n");

     while(token!=NULL)
     {
         v[len] = atoi(token);
         len += 1;

         token=strtok(NULL,",\n");
     }

    return len;
}

void read_file(char *filename)
{
    FILE * fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return;
    }

    char buf[255];

    char * p = fgets(buf,sizeof(buf),fp);
    while (p != NULL)
    {
         int va[100];
         int la = get_vector(va, buf);
         print_array(va, la);
         double x = euclid_norm(va, la);
         printf("The norm is %f\n", x);      

         p = fgets(buf,sizeof(buf),fp);    
    }
    fclose(fp);
    return;
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("please input a file name!\n");
        return 1;
    }

    char *filename = argv[1];

    read_file(filename);

    return 0;
}

