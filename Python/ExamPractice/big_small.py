first = int(input('enter a number (enter 0 to terminate): '))
#n = first
larger = 0
smaller = 0

while n != 0:
    #n = int(input('enter a number (enter 0 to terminate): '))
    if n > first:
        larger += n
    elif n < first:
        smaller += n
    n = int(input('enter a number (enter 0 to terminate): '))
'''
n = int(input('enter a number (enter 0 to terminate):' ))
while n != 0:
    if n > first:
        larger += n
    elif n < first:
        smaller += n
    n = int(input('enter a number (enter 0 to terminate): '))
'''
print(larger, smaller)
