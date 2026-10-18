#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Please input a string\n");
        return 1;
    }
 
    char *a = argv[1];

    bool results = true;

    int len = strlen(a);

    for(int i = 0; i < len/2; ++i)
    {
        if(a[i] != a[len - 1 - i])
        {
            results = false;
            break;
        }
    }

    if(results)
    {
        printf("%s is a palindrome\n", a);
    }
    else
    {
        printf("%s is not a palindrome\n", a);
    }

    return 0;
}
