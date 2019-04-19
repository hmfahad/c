//H. M. FAHAD
//Id. 183002002
//Section : DA
//Assignment for CSE-103


#include <stdio.h>   //Header file for Standard input Output


int floor_Ceil(float zoomingSize);        //Function Prototype

int main()
{
    int row, column, zoomingSize, incrementer;       // Local Variable Declaration


    printf("This Program can print a Pattern of Robot\nNote: It will be depend on your console size/resolution\n\nPlease Enter Zooming Size Between 100 to 200 : ");

    scanf("%d", &zoomingSize);        //Input Zoom Size

    //Zooming Control
    if(zoomingSize<100)
    {
        zoomingSize=20;
    }

    else if(zoomingSize>99&&zoomingSize<200)
    {
      zoomingSize/=5;
    }

    else
        zoomingSize=45;




    //Head

   for(row=0; row<floor_Ceil(zoomingSize*0.4); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.6); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.4); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Neck


    for(row=0; row<floor_Ceil(zoomingSize*0.1); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.75); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.1); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Chest

    for(row=0; row<floor_Ceil(zoomingSize*0.2); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.3); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(zoomingSize); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Hand

    for(row=0; row<floor_Ceil(zoomingSize*0.3); row++)
   {

       for(column=0; column<floor_Ceil(zoomingSize+(zoomingSize*0.6)); column++)
       {
           printf("*");
       }

       printf("\n");
   }


   //Belly

    for(row=0; row<floor_Ceil(zoomingSize*0.5); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.3); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(zoomingSize); column++)
       {
           printf("*");
       }

       printf("\n");
   }



   //Leg

    for(row=0; row<floor_Ceil(zoomingSize*0.2); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.425); incrementer++)
           {
               printf(" ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.2); column++)
       {
           printf("*");
       }

       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.35); incrementer++)
           {
               printf(" ");
           }


           for(column=0; column<floor_Ceil(zoomingSize*0.2); column++)
       {
           printf("*");
       }

       printf("\n");
   }


printf("\n\n\tThank You\n\n\n");



    return 0;
}


//User Define Function for Floor or Celling

int floor_Ceil(float zoomingSize)
{
  float frection;

  frection=zoomingSize-(int)zoomingSize;

  if(frection>0.49)

    return (int)zoomingSize+1;
  else

    return (int)zoomingSize;

}

