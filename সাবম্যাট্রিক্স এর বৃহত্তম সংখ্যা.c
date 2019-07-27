#include <stdio.h>
#include <stdlib.h>
#include <limits.h>





int main()
{
    int m, n, i, j, ri,rf, ci, cf, max=INT_MIN;

    scanf("%d%d", &m, &n);

    int a[m][n];


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    scanf("%d%d", &ri, &ci);
    scanf("%d%d", &rf, &cf);

    ri--;
    ci--;
    rf--;
    cf--;


    for(i=ri; i<=rf; i++)
    {
        for(j=ci; j<=cf; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }

    printf("%d\n",max);


    return 0;
}

