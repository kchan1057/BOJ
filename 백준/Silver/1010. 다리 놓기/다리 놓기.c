#include <stdio.h>
long long combination(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
int main()
{
    int t = 0, n = 0, m = 0;
    long long int combination_total = 0;
    scanf("%d", &t);
    for(int i = 0 ; i < t; i++)
        {
            scanf("%d %d", &n, &m);
            combination_total = combination(m,n);
            printf("%lld\n", combination_total);
        }
}