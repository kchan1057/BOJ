a = input(); count = 0; b = [i for i in a]
for i in range(int(len(a)/2)):
    if a[i] == a[(len(a)-1) - i]:
        count += 1
if(count == int(len(a)/2)): print(1)
else: print(0)