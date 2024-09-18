n, m = map(int, input().split())
a = [i for i in range(1, n+1)]
for _ in range(m):
    i, j = map(int, input().split())
    a[(i-1):j] = a[(i-1):j][::-1]

for i in range(n):
    print(a[i], end =" ")