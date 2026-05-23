#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myarray.h"

int contra(int *va, int la, int *vb, int lb)
{
    int total = 0;

    int x;

    int len = la < lb? la : lb;
 
    for(int i=0; i<len; ++i)
    {
        x = va[i] * vb[i];

        total = total + x;
    }
    
    return total;
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
    while (p != NULL)
    {
    
         int va[100];
         int la = get_vector(va, buf);
         print_array(va, la);

    //2
         p = fgets(buf,sizeof(buf),fp);
         
         if (p == NULL) break;

         int vb[100];
         int lb = get_vector(vb, buf);
         print_array(vb, lb);

         int result = contra(va, la, vb, lb);
         printf("The inner product is %d\n", result);

         p = fgets(buf, sizeof(buf),fp);
    }
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
