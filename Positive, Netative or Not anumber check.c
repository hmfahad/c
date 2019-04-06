
#include <stdio.h>
int main()
{
    char ch;
    int n;
    scanf("%d",&n);
    if ((n>='A'||n>='a')&&(n<='Z'||n<='z'))
    {
    printf("%c Not a Number ",ch);
    }
    else if (n < 0)
    {
            printf("The number is negative\n");
    }
    else if (n >0)
    {
            printf("The number is positive\n");
    }
    else if (n == 0)
    {
            printf("The number is zero!\n");
    }
return 0;
}
