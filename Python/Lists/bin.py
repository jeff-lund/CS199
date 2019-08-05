n = int(input("enter a number: "))

if n < 0:
    print("enter a positive number")
elif n == 0:
    print(0)
else:
    binary = []
    q = n
    r = 0
    count = 0
    
    while q > 0:
        #q = q // 2
        r = q % 2
        q = q // 2
        binary.append(r)
        count += 1

    while count > 0:
        count -= 1
        print(binary[count], end='')
    print()
