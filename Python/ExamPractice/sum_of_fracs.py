n = int(input("Enter a positive odd number: "))

if n % 2 == 0 or n < 0:
    print("Invalid data")
else:
    numer = n
    denom = 1
    s = 0
    while numer >= 1:
        s += numer / denom
        numer -= 2
        denom += 2

    print(s)
