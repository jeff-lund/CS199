n = int(input("Enter a positive, odd number: "))
if n % 2 == 0:
    print("Nope")
else:
    z = 1
    while n > 1:
        z = 2 + n**2 / z
        n -= 2
    z = 4 / (1 + 1 / z)
    print(z)
