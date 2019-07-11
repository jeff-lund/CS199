import random
import string
import sys

alphabet = string.ascii_lowercase + string.ascii_uppercase
a = int(input("Enter lower bound on string size: "))
b = int(input("enter upper bound on string size: "))
if a > b:
    print("lower bound must be greater than upper bound.")
    sys.exit()
length = random.randint(a, b)

ret = []
for _ in range(length):
    ret.append(random.choice(alphabet))

r = random.randint(a, b * 2)
for _ in range(r):
    r = random.randint(0, len(ret) - 1)
    char = ret[r]
    if char.islower():
        char = char.upper()
    else:
        char = char.lower()
    ret.insert(r, char)
ret = ''.join(ret)
print(ret)

