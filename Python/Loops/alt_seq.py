# input:  prompt user for an integer greater than or equal to 1
# ouput: 1*1 - 2*2 + 3*3 - 4*4 + 5*5 - 6*6 + 7*7 - .... +- n*n

import math
n = float(input("Please type in an integer >= 1: "))


# Solution 1
s = 0
k = 1
while(k <= n) :
    if(k % 2 == 0) : # checks if k is even
        s = s - k * k
    if(k % 2 == 1) : # checks if k is odd
        s = s + k * k
    k = k + 1
print("sum =" , s)


'''
# Solution 2
so = 0
k = 1
while(k <= n) :
    so = so + k * k
    k = k + 2

se = 0
k = 2
while(k <= n) :
    se = se + k * k
    k = k + 2
print("sum =" , so - se)
'''

'''
# Solution 3
s = 0
k = 1
sign = 1
while(k <= n) :
    s = s + sign * k * k
    sign = sign * -1
    k = k + 1
print("sum =" , s)
'''

'''
# Solution 4
s = 0
k = 1
while(k <= n) :
    s = s + ((-1)**(k + 1)) * k * k
    k = k + 1
print("sum =" , s)
'''
