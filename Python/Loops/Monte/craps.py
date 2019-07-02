import random
import math

trials = 10000000
success = 0
c = 0

while c < trials:
    d1 = math.ceil(random.random() * 6)
    d2 = math.ceil(random.random() * 6)
    if d1 == 0 or d2 == 0:
        print("whoops")
    total = d1 + d2
    #total = random.randint(2, 12) # bad 
    if total == 7 or total == 11:
        success += 1
    c += 1
print("The probability of craps is", success / trials)
