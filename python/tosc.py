
day_list = []
for _ in range(5):
    day = []
    day.append(int(input()))
    day.append(int(input()))
    day_list.append(day)

day_list.sort(key=lambda x:x[0])
result = []
for i in range(len(day_list)-1):
    A = set(range(day_list[i][0],day_list[i][1]+1))
    B = set(range(day_list[i+1][0], day_list[i+1][1]+1))
    result.append(list(A & B)) 

rr = []
for indx, e in enumerate(result):
    if e:
        rr.append(min(e))


print(result)
print(rr)
'''
독립적 / 일부 겹침 / 겹침
 1       

 1~4 / 5~20 and 8~12 
1 4, 5 20, 8 12, 10 31, 22 25   
1
4
10
31
8
12
22
25
5
20
'''

# # 문 11-3. ****
# N = int(input())
# label = input()
# move_rule = {
#     'A': -1, 'B': 1, 'C': -2, 'D': 2,
#     'E': -3, 'F': 3, 'G': -4, 'H': 4
# }
# result = 0
# for i in range(N):
#     searched = [0] * N
#     start = i
#     cnt = 0
#     searched[start] = 1
    
#     while 0 in searched and cnt < 2*N:
#         start += move_rule[label[start]]
#         searched[start] = 1

#         if not 0 in searched:
#             result = i+1
#             break
#         cnt += 1

# print(result)

# '''
# 10
# FABADGBDEA
# '''

# N = int(input())

# cnt = 0
# mod = N%4
# while mod%3:
#     mod += 4
# N -= mod
# team = N//4 + mod//3

# print(team)
# for _ in range(N//4): print(4)
# for _ in range(mod//3): print(3)





# N = int(input())
# total = 0
# tmp = 0
# cnt = 0
# ok = 0
# if int(input()) == 2:
#     fst, snd = 'B', 'A'
# else:
#     fst, snd = 'A', 'B'
# while total <= 24:
#     tmp = int(input())
#     cnt += 1
#     total += tmp
#     if total >= N and not ok:
#         check = cnt
#         ok = 1

# result = fst if check % 2 else snd

# print(result)
# print((check+1) // 2)


# """
# 18
# 1
# 1
# 5
# 3
# 5
# 7
# 1
# 4

# """   