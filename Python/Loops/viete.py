from math import sqrt

n = int(input("Enter a number: "))
v = 0
ans = 1
for _ in range(n):
    v = sqrt(2 + v)
    ans = ans * v/2
print(2/ans)
