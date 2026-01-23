#include <stdio.h>
int main() 
{
  int i, max, n;
  float total = 0;
  
  float arr1[1000] = {0};
  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%f", &arr1[i]);

  max = arr1[0];

  for(i = 0; i < n; i++)
    {
      if(max < arr1[i])
        max = arr1[i];
    }

  for(i = 0; i < n; i++)
    {
      arr1[i] = (arr1[i]/max)*100;
      total += arr1[i];
    }

  printf("%lf", total/n);
  return 0;
}