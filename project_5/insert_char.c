#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("No string loaded\n");
        return 1;
    }

    int n = strlen(argv[1]);
    char * buf = (char *)malloc(n+1);

    for(int i = 0; i < n; ++i)
    {
        buf[i] = argv[1][i];
    }

    char c;
    int j = n;
    scanf("%c", &c);

    for(int i = 0; i < n; ++i)
    {
        if(c < buf[i])
        {
            j = i;
            break;
        }
    }

    for(int i = n; i > j; --i)
    {
        buf[i] = buf[i - 1];
    }

    buf[j] = c;

    printf("%s\n", buf);

    free(buf);

    buf = NULL;

    return 0;
}
