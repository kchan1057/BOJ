t = int(input())
for _ in range(t):
    s = input()
    s_list = list(s)
    print(s_list[0], s_list[len(s_list)-1], sep = "")