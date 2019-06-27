import random
import math

# Generates a random integer between 1 and 20

# random.random() generates a number between 0 and 1, 
# inclusive of 0 and exclusive of 1 

# Multiplying by 20 expands the range from 0 to 19.9999999 
# almost but not quite 20

# Taking the floor turns the number into an int in the range 0 - 19
# Adding 1 (outside the floor!) moves the range to 1 - 20

random_num = math.floor(random.random() * 20) + 1
print(random_num)
