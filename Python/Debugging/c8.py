def crazy8():
    '''
    Allow a user to enter a sequence of integers terminated
    with a -1 which are stored in a list. The program prints "yup"
    if there was an eight in the list and "nope" if there was
    not an 8 in the list.
    Are there any bugs?
    '''
    nums = []
    n = int(input("enter a number (-1 to terminate): "))
    size = 0
    while n != -1:
        nums.append(n)
        size += 1
        n = int(input("enter a number (-1 to terminate): "))

    flag = 0
    k = 0
    while k < size:
        if nums[k] == 8:
            flag = 1
        k += 1
    if flag == 0:
        print("nope")
    else:
        print("yup")

crazy8()
