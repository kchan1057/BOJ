#include <stdio.h>
#include <string.h>

int main()
{
  int number;
  int count[26] = {0};
  char arr[1000001];
  int len = 0, max = 0, select = 0, cnt = 0;

  scanf("%s", arr);
  len = strlen(arr);

  for(int i = 0; i < len; i++)
    {
      if(arr[i] >= 97 && arr[i] <= 122)
      {
        number = arr[i] - 97;
      }

      else if(arr[i] >= 65 && arr[i] <= 90)
      {
        number = arr[i] - 65;
      }

      count[number]++;
    }

  max = count[0];

  for(int i = 1; i < 26; i++)
    {
      if(count[i] > max)
      {
        max = count[i]; select = i;
      }
    }

  for(int i = 0; i < 26; i++)
    {
      if(count[i] == max)
        cnt++;
    }

  if(cnt > 1)
    printf("?");

  else
    printf("%c", select + 65);
  
  return 0;
}