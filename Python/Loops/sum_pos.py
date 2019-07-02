num = int(input("Enter a positive number (enter a -1 to terminate): "))

if num < 0:
    print("No data")
else:
    if num % 2 == 0:
        summ = num
    else:
        summ = 0
    while num >= 0:
        #num = int(input("Enter a positive number (enter a negative number to terminate) :"))
        if num % 2 == 0:
            summ += num
        num = int(input("Enter a positive number (enter -1 to terminate): "))
    print("The sum of the even numbers is", summ)

