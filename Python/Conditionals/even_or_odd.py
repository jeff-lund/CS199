import math

n = int(input())

if n / 2 == math.floor(n / 2):
    print(n, "is even")
if n % 2 != 0:
    print(n, "is odd")
