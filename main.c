#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sizeOfArray, pivot, k, l, i, j, temp, locationPivot;

    scanf("%d", &sizeOfArray);

    int array[sizeOfArray];

    for(i=0; i<sizeOfArray; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &pivot);

    for(i=0; i<sizeOfArray; i++)
    {
        if(array[i]==pivot)
        {
            locationPivot=i;
            break;
        }

    }

    for(i=0;((i<(locationPivot-i-1))||((i+locationPivot+1)<(sizeOfArray-i-1))); i++)
    {
      if(i<(locationPivot-i-1))
      {
        temp=array[i];
        array[i]=array[locationPivot-i-1];
        array[locationPivot-i-1]=temp;
      }

        if((i+locationPivot+1)<(sizeOfArray-i-1))
      {
        temp=array[(i+locationPivot+1)];
        array[(i+locationPivot+1)]=array[(sizeOfArray-i-1)];
        array[(sizeOfArray-i-1)]=temp;
      }


    }

     for(i=0; i<sizeOfArray; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
