a, b = input().split()
a_list = list(a); b_list = list(b)
a_list = a_list[0:4][::-1]; b_list = b_list[0:4][::-1]
result1 = "".join(map(str, a_list))
result2 = "".join(map(str, b_list))
if result1 < result2: print(result2)
else:print(result1)
