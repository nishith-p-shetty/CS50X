from cs50 import get_int

# TODO
height = 0
while (height < 1 or height > 8):
    height = get_int("Height: ")  # input height
for x in range(1, height+1):  # 1st for loop
    for i in range(height-x):  # inr for loop
        print(" ", end="")  # space printing
    for j in range(x):  # inr for loop
        print("#", end="")  # # printing
    print("")  # new line printing