N = int(input())
rank = [input() for _ in range(N)]
M = int(input())
call = []
for _ in range(M):
    tmp = input()
    if tmp == 'Wonderful': call.append(-1)
    else: call.append(rank.index(tmp))

for i in call:
    if i > 0:
        rank[i], rank[i-1] = rank[i-1], rank[i]
        tmp = i-1
    else:
        rank[tmp], rank[tmp-1] = rank[tmp-1], rank[tmp]
 
print(rank)
print(call)
'''
JCDMW
DCCM
5
J
W
D
C
M
4
D
C
Wonderful
M
'''

# micro = [120, 40, 30]
# wgt_l = [1, 1.6, 2.3, 3.2, 4.1]
# total = 0

# while total <= 1000:
#     broken = 2 if total > 300 else 1
#     num, wgt = int(input()), int(input())
#     total += micro[num-1] * wgt_l[wgt-1] * broken

# print(int(total))

# card = [int(input()) for _ in range(6)]

# score = 0
# group = card[0]
# for i in range(1, 6):
#     if card[i] - card[i-1] == 1:
#         group *= card[i]
#     else:
#         score += group
#         group = card[i]
# score += group

# print(score)

# '''
# 145689
# 0120
# i = 2
# cn =2
# 1
# 4
# 5
# 6
# 8
# 9
# '''


# corp = [[30, 40], [40, 30], [50, 20]]

# N = int(input())
# Mob = int(input())
# Month = int(input())
# charge = 0
# total = 0
# dis = 0.9 if Mob else 1

# for i in range(Month):
#     a, b = int(input()), int(input())
#     charge += (a * corp[N-1][0] + b * corp[N-1][1]) * dis
#     print(charge)
#     total += a + b
#     if total >= 1000:
#         dis = 0.6 if Mob else 0.8

# print(charge)


# '''
# 3
# 1
# 4
# 400
# 400
# 400
# 400
# 400
# 400
# 400
# 400
# '''

# '''
# 1모 - -2
# 2모 - -1
# 3모 - X
# 4모 - 1
# 5모 - 2
# '''

# target = '1234'
# indx = 0
# x = 0
# tofu = 1
# total = 0
# while tofu != 3:
#     tofu = int(input())

#     if total%3 == 0 and total:
#         tofu = 6 - tofu

#     if tofu == 3: break
#     elif tofu == 1: indx += 2
#     elif tofu == 2: indx += 1
#     elif tofu == 4: indx -= 1
#     elif tofu == 5: indx -= 2
    
#     indx %= 4

#     total += tofu
#     print(target[indx])
