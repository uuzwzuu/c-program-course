#include<stdio.h>
#include<string.h>
#include"myarray.h"

int main(int argc, char *argv[])
{
     int a[9] = {1,3,4,6,7,9,13,20};

     int x = 8;
     int n = 8;
     int j = 0;

     for(int i = 0; i < n; ++i)
     {
         if(x < a[i])
         {
             j = i;
             break;
         }
     }

     for(int i = n; i > j; --i)
     {
         a[i] = a[i - 1];
     }

     a[j] = x;

     print_array(a, 9);

}
