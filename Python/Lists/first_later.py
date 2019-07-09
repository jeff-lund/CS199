# Does the first number entered appear again in the sequence
n = int(input("Enter a non zero number: "))
first = n
flag = False
if n == 0:
    print("Nope")
else:
    while n != 0:
        n = int(input("Enter a nonzero number: "))
        if n == first:
            flag = True

    if flag:
        print("the number apppeared again")
    else:
        print("the number did not appear again")
