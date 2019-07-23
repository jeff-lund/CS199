def alt_seq():
    '''
    Alternating sequence, take in a number from the user and perform the
    following computation.
    1 - 2 + 3 - 4 + 5 - 6 + 7...
    '''
    n = int(input("Enter a positive number: "))
    if n < 0:
        print("I said positive")
    else:
        summ = 0
        c = 1
        while c <= n:
            if c % 2 == 1:
                # odds
                summ += c
                c += 1
            if c % 2 == 0:
                # evens
                summ -= c
                c += 1
        print(summ)


alt_seq()
