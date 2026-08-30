#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

double tok_norm(char * buf)
{
    int sum = 0;

    char delims[] = ",";

    char * token = strtok(buf, delims);

    while(token != NULL)
    {
        int x = atoi(token);
        sum = sum + x * x;
        token = strtok(NULL, delims);
    }

    double y = sqrt(sum);

    return y;
}

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
    char * p = fgets(buf, sizeof(buf), fp);

    while(p != NULL)
    {
        double norm = tok_norm(buf);  //count
        printf("norm: %f\n", norm);  //print
        p = fgets(buf, sizeof(buf), fp);  //read next row
    }

    fclose(fp);

    return 0;
}

