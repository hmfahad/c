#include <stdio.h>
#include <stdlib.h>



int floor_Ceil(float n)
{
  float frection;

  frection=n-(int)n;

  if(frection>50)

    return (int)n+1;
  else

    return (int)n;

}


int main()
{
    float n;

    scanf("%f", &n);


    printf("%d", floor_Ceil(n));
    return 0;
}
