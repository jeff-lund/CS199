n = int(input("Enter a prime number: "))

if n < 2:
    print(n, "is not a prime number")
else:
    count = 2
    prime = True
    while count < n:
        if n % count == 0:
            prime = False
        count += 1
    if prime:
        print(n, 'is prime')
    else:
        print(n, 'is not prime')
