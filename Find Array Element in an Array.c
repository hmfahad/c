#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[1000], limit, incrementer, item, loct=-1;

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
            loct=incrementer+1;
            break;
        }
    }

    if(loct==-1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Found, loc=%d", loct);
    }



    return 0;
}
