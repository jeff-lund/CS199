# Converting a decimal number to a binary number with a divide by 2 algorithm

n = int(input("Enter a positve number: "))
if n < 0:
    print("Invalid number")
elif n == 0:
    print(0)
else:
    binary = []
    count = 0
    
    while n > 0: 
        q = n // 2 # quotient is to be carried on to the next iteration
        r = n % 2 # remainder is the extracted bit
        binary.append(r)
        n = q
        count += 1
    # print in reverse to turn into binary number
    while count > 0:
        count -= 1
        print(binary[count], end='')
    print()

