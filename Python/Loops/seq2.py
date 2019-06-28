# Find the result of the following
# For an n = 6: 6 - 1 + 5 - 4 + 3 - 2
# For an n = 12: 12 - 1 + 11 - 2 + 10 - 3 + 9 - 4 + 8 - 5 + 7 - 6
n = int(input('Enter a number: '))
back = n
forward = 1 
s = 0

if n % 2 != 0:
    print('Enter an even number please')
else:
    while back > forward:
        s = s + back - forward
        back = back - 1
        forward = forward + 1

print(s)
