positive = 0
negative = 0

n = int(input("Enter a non zero number: "))

while n != 0:
    if n > 0:
        positive += 1
    elif n < 0:
        negative += 1
        
    n = int(input("Enter a non zero number: "))

if positive > negative:
    print("You entered more positive numbers")
elif negative > positive:
    print("You entered more negative numbers")
elif negative == positive:
    print("You entered the same amout of negative and positive numbers")
