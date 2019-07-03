import math
import random

trials = 100000
count = 0
success = 0
while count < trials:
    b1_x = math.floor(random.random() * 8)
    b2_x = math.floor(random.random() * 8)
    b1_y = math.floor(random.random() * 8)
    b2_y = math.floor(random.random() * 8)

    while b1_x == b2_x and b1_y == b2_y:
        b1_y = math.floor(random.random() * 8)
        b2_y = math.floor(random.random() * 8)
    if b1_y != b2_y and b1_x != b2_x:
        if abs((b1_y - b2_y) / (b1_x - b2_x)) == 1:
            success += 1
    count += 1
print(success/ trials)
