# set up frequency table
i = 0
freq = []

while i < 101:
    freq.append(0)
    i += 1
msg = "Enter a number 1 - 100 (-1 to terminate): "

n = int(input(msg))
while n != -1:
    if n < 0 or n > 100:
        print("Invalid number")
    else:
        freq[n] += 1
    n = int(input(msg))

modes = []
m = 0
i = 0

while i < 101:
    if freq[i] > m:
        m = freq[i]
    i += 1

i = 0
print("Mode(s): ", end='')
while i < 101:
    if freq[i] == m:
        print(i, end = ' ')
    i += 1
print()
