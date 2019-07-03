import random
import math

trials = 100000
suc = 0
count = 0
same = 0

while count < trials:
    r1_x = math.floor(random.random() * 8)
    r1_y = math.floor(random.random() * 8)

    r2_x = math.floor(random.random() * 8)
    r2_y = math.floor(random.random() * 8)
    '''
    while r1_x == r2_x and r1_y == r2_y:
        r2_x = math.floor(random.random() * 8)
        r2_y = math.floor(random.random() * 8)
    '''
    '''
    if r1_x == r2_x and r1_y == r2_y:
        same += 1
    '''
    if r1_x != r2_x or r1_y != r2_y:
        if r1_x == r2_x or r1_y == r2_y:
            suc += 1
        count += 1

print("The probability of placing two rooks in attacking position is", suc / trials)
#print("The probability of two rooks being placed in attacking position is", (suc - same) / (trials - same))
