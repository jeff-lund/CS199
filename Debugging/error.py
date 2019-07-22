# Take in an integer, divide by each integer below it
# 5 / 4 / 3 / 2 / 1

n = int(input("Enter a number: "))
for divisor in range(1, n):
    n /= divisor
    
print(n)

