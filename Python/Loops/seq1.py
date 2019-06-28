# Find the result of the following
# For a n = 7:   7 - 1 - 3 - 5
# For a n = 11: 11 - 1 - 3 - 5 - 7 - 9 
n = int(input('Enter an odd number: '))

if n % 2 == 0:
    print("Enter an odd number please")
else:

    counter = 1
    result = n
    while counter < n:
        result = result - counter
        counter = counter + 2
    print(result)
    
    '''
    # subtraction is commutative
    result = n
    n = n - 2
    while n > 0:
        result = result - n
        n = n - 2
    print(result)
    '''
