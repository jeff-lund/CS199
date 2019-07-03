# Estimating pi via throwing darts

import random
import math

trials = 100000
s = 0
count = 0
while count < trials:
    dart_x = 2 * random.random() - 1
    dart_y = 2 * random.random() - 1
    c = math.sqrt(dart_x**2 + dart_y**2)
    if c <= 1:
        s += 1
    count += 1
print(s/trials * 4)
