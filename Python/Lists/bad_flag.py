flag = True

n = int(input("Enter a number: "))
while n > 0:
    if n % 2 == 1:
        flag = False
    elif n % 2 == 0:
        flag = True
    n = int(input("Enter a number: "))

if flag:
    print("The list was all even")
else:
    print("The list was not all even")
