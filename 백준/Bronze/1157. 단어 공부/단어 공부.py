s = input(); a = [0] * 26
for i in s:
    if('A' <= i <= 'Z'): a[ord(i)-65] += 1
    elif('a' <= i <= 'z'): a[ord(i)-97] += 1
b = max(a)
if a.count(b) > 1: print('?')
else: print(chr(a.index(b) + 65))