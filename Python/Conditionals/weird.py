n = int(input("Enter a number: "))

'''
# Direct transcription
if n % 2 == 1: # n is odd
    print("Weird")
if n % 2 == 0 and n >= 2 and n <= 5:
    print("Not Weird")
if n % 2 == 0 and n >= 6 and n <= 20:
    print("Weird")
if n % 2 == 0 and n > 20:
    print("Not Weird")
'''
# condensing even tests
if n % 2 == 1:
    print("Weird")
else:
    if n >= 2 and n <= 5:
        print("Not Weird")
    elif n >= 6 and n <= 20:
        print("Weird")
    elif n > 20:
        print("Not Weird")

'''
# Most compact version
if n % 2 == 1 or (n >= 6 and n <= 20):
    print("Weird)
else:
    print("Not Weird")
'''
