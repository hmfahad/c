#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, data[1000], j=1, primeCount=0,k, flag, limiti;

    scanf("%d", &n);

    data[0]=2;
    for(i=1; j<=n; i++)

    {
        data[i]=j;
        j+=2;

    }
    data[i]='\0';

    for(i=0; data[i]!='\0'; i++)


    {
        flag=0;

        limiti=(data[i]/2)+1;

        for(k=2; k<=limiti;k++)
        {

            if((data[i]%k)==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            primeCount++;
        }

    }


        printf("%d", primeCount);




    return 0;
}
