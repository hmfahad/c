#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;

   for(r=0; r<200; r++)
   {
       for(c=0; c<100; c++)
       {
           printf("*");
       }

       printf("\n");
   }

    return 0;
}
