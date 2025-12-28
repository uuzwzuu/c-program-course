#include<stdio.h>
#include<stdlib.h>

int main()
{
    // allocate a 16-byte space to integer blocks
    int *pti = (int *) malloc(16);

    void *p1 = (void *) pti;
    printf("%p\n", p1);

    ++pti;
    printf("%p\n", (void*) pti);


    char *ptc = (char *) malloc(16);
    printf("%p\n", (void *)ptc);

    ++ ptc;
    printf("%p\n", (void *)ptc);

    return 0;
}


