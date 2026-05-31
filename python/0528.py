dice = []
dice_per = []
sum = 0
error = 0
for i in range(6):
    tmp = int(input())
    dice.append(tmp)
    sum += tmp

for i in range(6):
    dice_per.append(dice[i]/sum*100)
    if (dice_per[i] >= 30):
        error = i+1

for i in range(6):
    print(f"{i+1}: {dice_per[i]:.3f}")
if error:
    print(f"Problem at {error}\nResult: {dice_per[error-1]} %")
else:
    print("Fair")

# 4
# 5
# 3
# 7
# 6
# 2
