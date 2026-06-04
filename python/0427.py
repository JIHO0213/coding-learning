N = int(input())

l = []
for i in range(N):
    name, *score = input().split()
    score = list(map(int, score))
    l.append([name] + score)

# x는 l의 한 원소인 ['Sejong', 100, 100, 70] 형태입니다.
# x[0]=이름, x[1]=1번점수, x[2]=2번점수, x[3]=3번점수
l.sort(key=lambda x: (-sum(x[1:]), -x[1], -x[2], x[0]))

for student in l:
    name = student[0]
    total_score = sum(student[1:])
    print(f"{name} {total_score}")