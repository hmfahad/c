#include<stdio.h>
int main()
{
    int n,i,p,t1=0,s=0,k,t2=0;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            t1++;
        }
        else{
            t2++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(t1>t2)
        {
            if(a[i]%2!=0)
            {
                k=i;
            }
        }
        else{
            if(a[i]%2==0)
               {
                   k=i;
               }
        }
    }
    printf("%d\n",k);

}
