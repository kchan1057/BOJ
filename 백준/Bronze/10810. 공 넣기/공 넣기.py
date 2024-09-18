n, m = map(int, input().split())
a = [0] * (n+1)

for t in range(m):
    i, j, k = map(int, input().split())
    for s in range(i, j+1):
        a[s] = k
        
for i in range(1, n+1):
    print(a[i], end = " ")