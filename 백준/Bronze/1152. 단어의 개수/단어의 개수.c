#include <stdio.h>

int main()
{
  int n;
  int count = 0, len = 0, i = 0;
  char arr[1000001];
  
  scanf("%[^\n]s", arr);
  while(arr[i] != '\0')
    {
      len++;
      i++;
    }

  if(len == 1 && arr[0] == 32)
        count--;
  
  for(n = 0; n < len-2; n++)
    {
      if(arr[n+1] == 32)
        count++;
    }

  printf("%d", count+1);
  return 0; 
}