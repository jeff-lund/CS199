key = []
value = []

msg = 'Enter a number (-1 to terminate): '
n = int(input(msg))
while n != -1:
    i = 0
    l = len(key)
    # check if n is in key list
    found = False
    while i < l:
        if key[i] == n:
            found = True
            l = 0 # short circuit
        else:
            i += 1
    if found:
        # If we found it increment to mode count
        value[i] += 1
    else:
        # If we didn't find it in the key list, add it and add the count to value list
        key.append(n)
        value.append(1)
    n = int(input(msg))

# Find max value in the value list, aka the mode
maxv = 0
l = len(key)
i = 0
while i < l:
    if value[i] > maxv:
        maxv = value[i]
    i += 1

i = 0
# Iterate through the lists to find modes, aka keys
print("Mode(s):", end=' ')
while i < l:
    if value[i] == maxv:
        print(key[i], end=' ')
    i += 1
print()
