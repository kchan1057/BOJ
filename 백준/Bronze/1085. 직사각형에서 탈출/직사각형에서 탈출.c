#include <stdio.h>
int main(void){
  int arr[5] = {0};
  scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

  arr[2] = arr[2] - arr[0];
  arr[3] = arr[3] - arr[1];

  int min = arr[0];
  for(int i = 0; i < 4; i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }

  printf("%d", min);
  return 0;
}
