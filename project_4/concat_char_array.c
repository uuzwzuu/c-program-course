#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copy_array(char *dst, char *src, int n)
{
    for(int i = 0; i < n; ++i)
    {
        dst[i] = src[i];
    }
}

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Please input 2 strings\n");
        return 1;
    }
    char *a = argv[1];
    char *b = argv[2];

    int alen = strlen(a);
    printf("%d\n", alen);
    int blen = strlen(b);
    int clen = alen + blen;

    char *c = (char *)malloc(clen);

    copy_array(c,a,alen);
    copy_array(&c[alen],b,blen);

    printf("%s\n",c);

    free(c);
    c = NULL;

    return 0;
}
