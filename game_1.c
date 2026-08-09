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
            if(y > 0) y--;
        }
        else if(w == 'a')
        {
            if(x > 0) x--;
        }       
        else if(w == 's')
        {
            if(y < my - 1) y++;
        }        
        else if(w == 'd')
        {
            if(x < mx - 1) x++;
        }
    }

    return 0;
}
