'''
Print out alternating even and odd numbers
'''
evens = []
odds = []
msg = "Enter a number (-1 to terminate): "
# Gather input, appending to correct list
n = int(input(msg))
while n != -1:
    if n % 2 == 0:
        evens.append(n)
    else:
        odds.append(n)
    n = int(input(msg))

# Method 1
# Use the shortest length to iterate to make sure 
# even and odd numbers printed match
if len(evens) < len(odds):
    length = len(evens)
else:
    length = len(odds)
# Print out numbers in pairs
if length == 0:
    print("No Output")
else:
    for i in range(length):
        print(evens[i], odds[i], end=' ')
    print()

'''
# Method 2 - Zip
# zip will stop when one list is emptied out so we don't
# need to worry about length
if len(evens) == 0 or len(odds) == 0:
    print("No Output")
else:
    for e, o in zip(evens, odds):
        print(e, o, end=' ')
    print()
'''
