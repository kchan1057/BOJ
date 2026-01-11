#include <iostream>
using namespace std;

int d[1001];

int main()
{
  int N;
  cin>>N;
  
  d[1] = 1;
  d[2] = 3;
  for(int i=3; i<=N; i++) {
      d[i] = d[i-1] + 2*d[i-2];
      d[i] = d[i] % 10007;
  }
  cout<<d[N];

  return 0;
}