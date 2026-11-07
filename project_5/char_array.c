#include<stdio.h>
#include"../myarray/myarray.h"

int main(int argc, char *argv[])
{
    char c[5] = {'a','c','e','g','i'};

    char q[] = "acegi";

    char * p = "acegi";

    print_char_array(c,5);
    print_char_array(q,5);
    print_char_array(p,5);

    printf("%s\n", c);
    printf("%s\n", q);
    printf("%s\n", p);

    int i = sizeof(c);

    printf("%d\n", i);

    int j = sizeof(q);

    printf("%d\n", j);

    int k = sizeof(p);

    printf("%d\n", k);

}
