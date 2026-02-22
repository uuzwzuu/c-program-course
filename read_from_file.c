#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_array(int *a, int len)
{
    for (int i=0; i<len; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

int find_min_and_swap(int *a, int len)
{
    int j=0;
    int m=a[0];
    for(int i=0; i<len; ++i)
    {
        if (a[i]<m)
        {
            m=a[i];
            j=i;
        }
    }
   // printf("The min value is %d\n", m);
   // printf("The index is %d\n", j);

    int x=a[0];
    a[0]=m;
    a[j]=x;

    //print_array(a, len);

    return 0;
}

int sort_array(int *a, int len)
{
    for(int i=0; i<len-1; ++i)
    {
        find_min_and_swap(a+i, len-i);
    }

    return 0;

}
int print_file(char * filename)
{
    FILE * fp = fopen(filename, "r");
    
    if (fp == NULL)
    {
        printf("Error: open file failed.\n");
        return 1;
    }    

    char buf[255];
       
    char * p = fgets(buf,sizeof(buf),fp);

    while(p!= NULL)
    {
        int a[10];
        int len = 0;

        char * token=strtok(buf, ",\n");

        while(token!=NULL)
        {
            a[len] = atoi(token);
            len += 1;

            token=strtok(NULL,",\n");
        }
        printf("\n");
        printf("length:%d\n", len);
        sort_array(a, len);
        print_array(a, len);
        p=fgets(buf,sizeof(buf),fp);
    }
    printf("finished reading the file!\n");

    fclose(fp);
    return 0;
}

int main(int argc, char *argv[])
{


    if (argc < 2)
    {
        printf("Please input a filename!\n");
        return 1;
    }

    char * filename = argv[1];

    print_file(filename);


    return 0;
}

