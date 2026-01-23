#include <stdio.h>
#include <string.h>
int main()
{
  char arr[101];
  int a[26] = {0};
  int n = 0, count = 0;
  scanf("%d", &n);

  for(int i = 0; i < n ; i++)
    {
      int a[26] = {0};
      scanf("%s", arr);
      int len = strlen(arr);
      for(int j = 0; j < len ; j++)
        {
          a[arr[j] - 'a']++;
          if(a[arr[j] - 'a'] > 1)
          {
            if(arr[j] != arr[j-1])
              break;
          }

          if(j == len -1)
            count++;
        }
    }
  printf("%d", count);
    
  
  return 0; 
}
