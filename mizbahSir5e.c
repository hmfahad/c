#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m, s, d, total,budget, i, minimum, data[3][100], smallestMove=2147483647, smallestShopping=2147483647, smallestDinner=2147483647;

  scanf("%d", &m);
  for(i=0; i<m; i++)
  {
      scanf("%d", &data[0][i]);
      if(data[0][i]<smallestMove)
      smallestMove=data[0][i];


  }
  scanf("%d", &s);
  for(i=0; i<s; i++)
  {
      scanf("%d", &data[1][i]);
      if(data[1][i]<smallestShopping)
      smallestShopping=data[1][i];
  }
  scanf("%d", &d);
  for(i=0; i<d; i++)
  {
      scanf("%d", &data[2][i]);
      if(data[2][i]<smallestDinner)
      smallestDinner=data[2][i];
  }

    scanf("%d", &budget);

    total=smallestDinner+smallestMove+smallestShopping;

    if(total<=budget)
    {
        printf("%d", total);
    }
    else
        printf("Divorce");


    return 0;
}
