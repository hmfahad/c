#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit, data[1000], i, j, temp;

    scanf("%d", &limit);

    for(i=0; i<limit; i++)
    {
        scanf("%d", &data[i]);
    }


for(j=0;j<limit; j++)
{
     for(i=0; i<limit-j-1; i++)
    {
       if(data[i]<data[i+1])
       {
           temp=data[i];
           data[i]=data[i+1];
           data[i+1]=temp;
       }
    }
}


    for(i=0; i<limit; i++)
    {
        printf("%d", data[i]);

        if(i<limit)
            printf(" ");
    }


    return 0;
}
