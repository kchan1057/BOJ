#include <stdio.h>
int main(void)
{
  int n = 1, len = 0, a = 0, count = 0;
  int arr[1000000] = {0};

  
  while(n != 0)
    {
      scanf("%d", &n);
      if(n == 0)
        break;
      
      for(int i = 0; n > 0 ;i++)
        {
          a = n%10;
          arr[i] = a;
          n /= 10;
          len++; 
        }

      for(int i = 0; i < len/2 ;i++)
        {
          if(arr[i] == arr[len-1-i])
            count++;
        }

      if(count == len/2)
        printf("yes\n");

      else 
        printf("no\n");   

      len = 0, count = 0, n = 1;
    }
  
	return 0;
}