#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, x, y, i, j;

    //Matrix A initialization

    scanf("%d%d", &m, &n);

    int a[m][n];

    for(i=0; i<m; i++)
    {
        for(j=0;j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    //Matrix B initialization


        scanf("%d%d", &x, &y);

    int b[x][y], ab[m][y];

    for(i=0; i<x; i++)
    {
        for(j=0;j<y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(n!=x)
    {
        printf("Multiplication not possible.");
    }
    else
    {
        for(i=0; i<m; i++)
        {
            for(j=0;j<y; j++)
            {
                ab[i][j]=a[i][j]*b[i][j];

            }
        }


    }

    return 0;
}
