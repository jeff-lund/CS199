def even_odds():
    '''
    Take in a sequence of numbers from the user. Print out all evens
    followed by all odds.
    '''
    msg = "Enter a number (-1 to terminate): "
    n = int(input(msg))
    evens = []
    elength = 0
    odds = []
    olength = 0

    while n != -1:
        if n % 2 == 0:
            evens.append(n)
            elength += 1
        else:
            odds.append(n)
            olenth += 1
        n = int(input(msg))

    c = 0
    print("Even numbers entered")
    while c < elength:
        print(evens[c])
        c += 1
    c = 0
    while c < olength:
        print(odds[c])
        c += 1

even_odds()
