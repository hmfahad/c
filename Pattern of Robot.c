//H. M. FAHAD
//Id. 183002002
//Section : DA
//Assignment for CSE-103


#include <stdio.h>   //Header file for Standard input Output


int floor_Ceil(float n);        //Function Prototype

int main()
{
    int row, column, n, incrementer;       // Local Variable Declaration


    printf("This Program can print a Pattern of Robot\nNote: It will be depend on your console size/resolution\n\nPlease Enter Zooming Size 100 to 200\n");

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

   for(row=0; row<floor_Ceil(n*0.4); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(n*0.6); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(n*0.4); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Neck


    for(row=0; row<floor_Ceil(n*0.1); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(n*0.75); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(n*0.1); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Chest

    for(row=0; row<floor_Ceil(n*0.2); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(n*0.3); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(n); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Hand

    for(row=0; row<floor_Ceil(n*0.3); row++)
   {

       for(column=0; column<floor_Ceil(n+(n*0.6)); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Belly

    for(row=0; row<floor_Ceil(n*0.5); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(n*0.3); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(n); column++)
       {
           printf("*");
       }

       printf("\n");
   }



   //Leg

    for(row=0; row<floor_Ceil(n*0.2); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(n*0.425); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(n*0.2); column++)
       {
           printf("*");
       }

       for(incrementer=0; incrementer<floor_Ceil(n*0.35); incrementer++)
           {
               printf(" ");
           }


           for(column=0; column<floor_Ceil(n*0.2); column++)
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

