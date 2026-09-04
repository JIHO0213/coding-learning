N = int(input())
bar_list = []
for _ in range(N):
    bar_list.append(int(input()))

inv = []
M = int(input())
for _ in range(M):
    x = int(input())
    inv.append(x-1)
    bar_list[x-1] = -bar_list[x-1]
notsee = 0

tmp = []
a = 0 
for i in range(N):
    a, tmp = bar_list[i], bar_list[i+1:]
    if a > 0 and any([a <= j for j in tmp]):
       notsee += 1
    
for i in range(M):
    a, tmp = -bar_list[inv[i]], bar_list[inv[i]+1:]
    if any([a <= j for j in tmp]):
        notsee += 1
see = N - notsee
print(see)

'''

6
6
9
7
6
4
6
0


10
6
2
3
3
7
4
5
2
3
1
2
2
5

'''