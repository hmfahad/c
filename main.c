#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int floor_Ceil(float n);

int main()
{
    int r, c, n, spacecontrol, i;


    printf("This Program can print a Pattern of Robot\nPlease Enter Zooming Size 100 to 200\n");

    scanf("%d", &n);

    if(n<100)
    {
        n=20;
    }

    else if(n>99&&n<200)
    {
      n/=5;
    }

    else
        n=45;




    //Head

   for(r=0; r<floor_Ceil(n*0.4); r++)
   {
       for(i=0; i<floor_Ceil(n*0.6); i++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n*0.4); c++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Neck


    for(r=0; r<floor_Ceil(n*0.1); r++)
   {
       for(i=0; i<floor_Ceil(n*0.75); i++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n*0.1); c++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Chest

    for(r=0; r<floor_Ceil(n*0.2); r++)
   {

        for(i=0; i<floor_Ceil(n*0.3); i++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n); c++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Hand

    for(r=0; r<floor_Ceil(n*0.3); r++)
   {

       for(c=0; c<floor_Ceil(n+(n*0.6)); c++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Belly

    for(r=0; r<floor_Ceil(n*0.5); r++)
   {

        for(i=0; i<floor_Ceil(n*0.3); i++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n); c++)
       {
           printf("*");
       }

       printf("\n");
   }



   //Leg

    for(r=0; r<floor_Ceil(n*0.2); r++)
   {
       for(i=0; i<floor_Ceil(n*0.4); i++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n*0.2); c++)
       {
           printf("*");
       }

       for(i=0; i<floor_Ceil(n*0.4); i++)
           {
               printf(" ");
           }


           for(c=0; c<floor_Ceil(n*0.2); c++)
       {
           printf("*");
       }

       printf("\n");
   }


printf("\n\n\tThank You\n\n\n");



    return 0;
}


int floor_Ceil(float n)
{
  float frection;

  frection=n-(int)n;

  if(frection>0.49)

    return (int)n+1;
  else

    return (int)n;

}

