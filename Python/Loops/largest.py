n = int(input("Enter a non zero number: "))
if n == 0:
    print("No data")
else:
    largest = n
    second = 0
    while n != 0:
        n = int(input("Enter a non zero number: "))
        if n != 0:
            if n > largest:
                second = largest
                largest = n
            elif second == 0:
                second = n
            elif n > second:
                second = n
        #n = int(input("Enter a non zero number: "))

if second == 0:
    print("The largest value is {}, no other numbers were added".format(largest))
else:
    print("The largest value you entered is {} and the second largest is {}".format(largest, second))


#print("The largest number you entered is", largest)
