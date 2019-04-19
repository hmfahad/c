//H. M. FAHAD
//Id. 183002002
//Section : DA
//Assignment for CSE-103


#include <stdio.h>   //Header file for Standard input Output




int floor_Ceil(float n);        //Function Prototype

int main()
{
    int r, c, n, incrementer;       // Local Variable Declaration


    printf("This Program can print a Pattern of Robot\nPlease Enter Zooming Size 100 to 200\n");

    scanf("%d", &n);        //Input Zoom Size

    //Zooming Control
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
       for(incrementer=0; incrementer<floor_Ceil(n*0.6); incrementer++)
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
       for(incrementer=0; incrementer<floor_Ceil(n*0.75); incrementer++)
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

        for(incrementer=0; incrementer<floor_Ceil(n*0.3); incrementer++)
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

        for(incrementer=0; incrementer<floor_Ceil(n*0.3); incrementer++)
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
       for(incrementer=0; incrementer<floor_Ceil(n*0.425); incrementer++)
           {
               printf(" ");
           }


       for(c=0; c<floor_Ceil(n*0.2); c++)
       {
           printf("*");
       }

       for(incrementer=0; incrementer<floor_Ceil(n*0.35); incrementer++)
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


//User Define Function for Floor or Celling

int floor_Ceil(float n)
{
  float frection;

  frection=n-(int)n;

  if(frection>0.49)

    return (int)n+1;
  else

    return (int)n;

}

