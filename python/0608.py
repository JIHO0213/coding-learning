dice = [0, 0, 0, 0, 0, 0]
score = 0

for i in range(4):
    dice[int(input())-1] += 1

for i in range(len(dice)):
    if dice[i] == 4:
        score = 40
        break
    elif all(dice[i:i+4]) and len(dice[i:i+4]) == 4:
        score = 30
        
    elif dice.count(2) == 2:
        score = 25
        
    elif dice[i] == 3:
        score = 20
         
    elif all(dice[i:i+3]) and len(dice[i:i+3]) == 3:
        score = 15

    elif dice[i] == 2:
        score = 10 
    

    

print(score)



