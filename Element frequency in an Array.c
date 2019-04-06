#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[1000], limit, incrementer, item, frequency=0;

    scanf("%d", &limit);

    for(incrementer=0; incrementer<limit; incrementer++)
    {
        scanf("%d", &data[incrementer]);
    }

    scanf("%d", &item);

    for(incrementer=0; incrementer<limit; incrementer++)
    {
        if(item==data[incrementer])
        {
            frequency++;
        }
    }



        printf("%d", frequency);




    return 0;
}
