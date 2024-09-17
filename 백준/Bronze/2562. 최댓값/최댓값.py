a = []
for i in range(9):
    b = int(input())
    a.append(b)
    
max_index = a.index(max(a))
print(max(a))
print(max_index + 1)