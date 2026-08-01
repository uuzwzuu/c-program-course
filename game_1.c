#include<stdio.h>

int main(int argc, char *argv[])
{
    int rid = 1;
    int cid = 3;

    for(int x = 0; x < 4; ++x)
    {
        for(int i = 0; i < 7; ++i)
        {
            if(x == rid && i == cid)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
