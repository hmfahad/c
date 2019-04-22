#include <stdio.h>


void magicSquire(int n);

int main()
{
    int n;

     printf("Please Enter Odd number for magic squire:\n");

    scanf("%d", &n);

    if(n%2==0)
    {
        do
      {
        printf("Magic squire doesn't work with even number, Please Enter an odd number:\n");

        scanf("%d", &n);
      }
      while(n%2==0);
    }


    magicSquire(n);

    return 0;
}



void magicSquire(int n)
{
    int data[n][n], r=0, c=(n-1)/2, i=0, j=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            data[i][j]=0;
        }
    }

    for(i=1; i<=n*n; i++)
    {
        data[r][c]=i;

        r--;
        c++;

        if(r<0&&c>(n-1))
        {
            r+=2;
            c--;
        }

        else if(r<0)
        {
            r=r+n;
        }

        else if(c>(n-1))
        {
            c=0;
        }

        else if(data[r][c]!=0)
        {
            r+=2;
            c--;
        }

    }


     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           printf("%d\t", data[i][j]);
        }

        printf("\n");

    }



}
