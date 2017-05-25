#include <stdio.h>

int add(int a,int b)
{
   int total;
   total = a + b;
   return total;
}

int main()
{
   printf("%d\n",add(3,5));
   return 0;
}
