n = int(input("Enter a number (terminate with -1): "))
s = 0 # sum
while n != -1:
    s += n
    n = int(input("Enter a number (terminate with -1): "))
    #s += n
print(s)

