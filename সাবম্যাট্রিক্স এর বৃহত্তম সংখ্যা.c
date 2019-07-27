#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int maxElementInSubMatrix(int data[100][100], ii,ij,fi,fj);

int main()
{
    int m, n, i, j;

    scanf("%d%d", &m, &n);

    int a[m][n];


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    scanf("%d%d", &ii, &ij);
    scanf("%d%d" &fi, &fj);

    printf("%d\n",maxElementInSubMatrix(a, ii,ij,fi,fj) )


    return 0;
}


int maxElementInSubMatrix(int data[100][100], ii,ij,fi,fj)
{
    int max=INT_MIN, i, j;

    for(i=ii; i<=fi; i++)
    {
        for(j=ij; j<=fj; j++)
        {
            if(data[i][j]>max)
                max=data[i][j];
        }
    }

    return max;
}
