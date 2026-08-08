#include<stdio.h>
#include<stdlib.h>

void draw(int x, int y, int mx, int my)
{
    for(int i = 0; i < my; ++i)
    {
        for(int j = 0; j < mx; ++j)
        {
            if(i == y && j == x)
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
}

int main(int argc, char *argv[])
{
    if(argc < 5)
    {
        printf("init error\n");
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int mx = atoi(argv[3]);
    int my = atoi(argv[4]);

    while(1)
    {
        draw(x, y, mx, my);

        char w;

        scanf(" %c", &w);
        
        if(w == 'w')
        {
            y = y - 1;
        }
        else if(w == 'a')
        {
            x = x - 1;
        }       
        else if(w == 's')
        {
            y = y + 1;
        }        
        else if(w == 'd')
        {
            x = x + 1;
        }
    }

    return 0;
}
