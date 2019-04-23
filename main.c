
//Source Code for Print a Pattern of Robot

#include<stdio.h>       //Header File
#include<stdlib.h>


int floor_Ceil(float zoomingSize);        //Function Prototype

int main()
{
    int row, column, zoomingSize, incrementer;       // Local Variable Declaration

    FILE *fptr;
    fptr = fopen("F:\\Robot.txt","w");


    printf("This Program can print a Pattern of Robot\nNote: It will be depend on your console size/resolution\n\nPlease Enter Zooming Size Between 100 to 200 : ");

    scanf("%d", &zoomingSize);        //Input Zoom Size

    //Zooming Control
    if(zoomingSize<100)
    {
        zoomingSize=20;                                     //Minimum Size
    }

    else if(zoomingSize>99&&zoomingSize<200)
    {
      zoomingSize/=5;                                       //Scaling
    }

    else
        zoomingSize=45;                                     //Maximum Size




    //Head or Robot

   for(row=0; row<floor_Ceil(zoomingSize*0.4); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.6); incrementer++)
           {
               fprintf(fptr," ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.4); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }


   //Neck of Robot


    for(row=0; row<floor_Ceil(zoomingSize*0.1); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.75); incrementer++)
           {
               fprintf(fptr," ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.1); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }


   //Chest

    for(row=0; row<floor_Ceil(zoomingSize*0.2); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.3); incrementer++)
           {
               fprintf(fptr," ");
           }


       for(column=0; column<floor_Ceil(zoomingSize); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }


   //Hand

    for(row=0; row<floor_Ceil(zoomingSize*0.3); row++)
   {

       for(column=0; column<floor_Ceil(zoomingSize+(zoomingSize*0.6)); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }


   //Belly

    for(row=0; row<floor_Ceil(zoomingSize*0.5); row++)
   {

        for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.3); incrementer++)
           {
               fprintf(fptr," ");
           }


       for(column=0; column<floor_Ceil(zoomingSize); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }



   //Leg

    for(row=0; row<floor_Ceil(zoomingSize*0.2); row++)
   {
       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.425); incrementer++)
           {
               fprintf(fptr," ");
           }


       for(column=0; column<floor_Ceil(zoomingSize*0.2); column++)
       {
           fprintf(fptr,"*");
       }

       for(incrementer=0; incrementer<floor_Ceil(zoomingSize*0.35); incrementer++)
           {
               fprintf(fptr," ");
           }


           for(column=0; column<floor_Ceil(zoomingSize*0.2); column++)
       {
           fprintf(fptr,"*");
       }

       fprintf(fptr,"\n");
   }


fprintf(fptr,"\n\n\tThank You\n\n\n");


 fclose(fptr);


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
