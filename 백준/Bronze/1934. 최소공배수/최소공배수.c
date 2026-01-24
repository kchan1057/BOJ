#include <stdio.h>
int main()
{
  int a, b, t;
  int min_number = 1, j = 2;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
    {
      scanf("%d %d", &a, &b);
      if(a == 1 || b == 1)
        printf("%d\n", a*b);
      else if (a == b)
        printf("%d\n", a);
      else
      {
        while(j <= a || j <= b)
          {
            if(a%j == 0 && b%j == 0)
            {
              a = a/j;
              b = b/j;
              min_number *= j;
            }
            else
              j++;
          }
        printf("%d\n", min_number*a*b);
      }
      min_number = 1;
      j = 2;
    }
  return 0;
}