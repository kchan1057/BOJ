#include <stdio.h>
int main(void)
{
  int num5 = 0, num25 = 0, num125 = 0;
  int n;
  scanf("%d", &n);

  num5 = n/5;
  num25 = n/25;
  num125 = n/125;

  printf("%d", num5+num25+num125);
  
	return 0;
}

