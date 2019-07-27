#include <stdio.h>
#include <stdlib.h>

int main()
{

    int st, s, i, j, passed, fail=0;

    scanf("%d%d", &st, &s);

    passed=st;

    int data[st][s];

    for(i=0; i<st; i++)
    {
        for(j=0; j<s; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }


    for(i=0; i<st; i++)
    {
        for(j=0; j<s; j++)
        {
            if(data[i][j]<33)
            {
               fail++;
            }
        }

        if(fail>2)
        {
            passed--;
        }
        fail=0;
    }

    printf("%d", passed);
    return 0;
}
