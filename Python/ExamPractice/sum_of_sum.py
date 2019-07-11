n = int(input("Enter a number: "))
if n % 2 == 1 or n <= 0:
    print("invalid")
else:
    ''''
    c = 1
    denom = 0
    numer = 0
    s = 0
    while denom < n:
        denom += 2
        numer += (2 * c)
        s += numer / denom
        c += 1

    print(s)
    '''
    '''
    s = 0
    denom = 2
    numer = 0
    c = 0
    c1 = 1
    while denom <= n:
        c += 2 * c1
        s += c / denom
        c1 += 1
        denom += 2
    print(s)
    '''
    s = 0
    denom = 2
    numer = 2
    while denom <= n:
        s += numer / denom
        denom += 2
        numer += denom
    print(s)










