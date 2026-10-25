#include<stdio.h>
#include<stdlib.h>
#include"myarray.h"

void copy_array(int *dst, int *src, int n)
{
    for(int i = 0; i < n; ++i)
    {
        dst[i] = src[i];
    }
}

int main(int argc, char *argv[])
{
    int a[] = {1,3,4,5,8};
    int b[] = {2,9,10};

    int alen = sizeof(a)/sizeof(a[0]);
    int blen = sizeof(b)/sizeof(b[0]);
    int clen = alen + blen;

    int *c = (int *)malloc(clen * sizeof(int));

    copy_array(c,a,alen);
    copy_array(&c[alen],b,blen);

    print_array(c,clen);

    return 0;
}
