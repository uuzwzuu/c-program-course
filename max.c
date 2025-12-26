#include<stdio.h>
#include<stdlib.h>

int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maximum1(int a, int b, int c)
{
    if (a > b)
    {
        /* Here 'a' is the larger one, we 
         * just need to compare 'a' and 'c'.
         */

         if (a > c)
         {
             return a;
         }
         else
         {
             return c;
         }
    }
    else 
    {  
       /* Here 'b' is the larger one, we
        * just need to compare 'b' and 'c'.
        */

          if (b > c)
         {
             return b;
         }
         else
         {
             return c;
         }
    }
}

int maximum2(int a, int b, int c)
{
    int t = max2(a, b);
    int s = max2(t, c);

    return s;
}

int minimum1(int a, int b, int c)
{
    if (a < b)
    {
        /* Here 'a' is the smaller one, we
         * just need to compare 'a' and 'c'.
         */

         if (a < c)
         {
             return a;
         }
         else
         {
             return c;
         }
    }
    else
    {  
         /* Here 'b' is the smaller one, we
          * just need to compare 'b' and 'c'.
          */

          if (b < c)
          {
              return b;
          }
          else
          {
              return c;
          }
    }

}


int main(int argc, char *argv[])
{
    if (argc !=4)
    {
        printf("Please input 3 integers, like this:\n");
        printf("%s 1 2 3\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    int m1 = maximum1(a, b, c);

    printf("maximum(%d,%d,%d) = %d\n", a, b, c, m1);

    int m2 = minimum1(a, b, c);
    printf("min(%d,%d,%d) = %d\n", a, b, c, m2);

    return 0;
}
