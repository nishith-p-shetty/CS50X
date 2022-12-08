# TODO
from cs50 import get_float

ch = 0
ca = -1

# input
while ca < 0:
    ca = get_float("Change owed: ")
# convert
ca = round(ca * 100)

while ca >= 25:
    ca -= 25
    ch += 1
while ca >= 10:
    ca -= 10
    ch += 1
    
while ca >= 5:
    ca -= 5
    ch += 1
while ca >= 1:
    ca -= 1
    ch += 1

# output
print(ch)