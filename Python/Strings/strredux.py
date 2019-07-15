initial = input("Enter a string to be reduced: ")

changed = True # has the string changed since the last iteration
print()
print("Initial string: ", initial)

while changed:
    skip = False # skip the next letter if true, used to elimante pairs
    changed = False
    last = True # Should the last character be included
    copy = []
    i = 0
    l = len(initial) - 1
    while i < l:
        if skip:
            last = True
            skip = False
        else:
            a = initial[i]
            b = initial[i+1]
            #       Same letter                                     Opposite Cases
            if (a.lower() == b.lower()) and ((a.isupper() and b.islower()) or (a.islower() and b.isupper())):
                    changed = True
                    last = False
                    skip = True
            else:
                copy.append(a)
                last = True
        i += 1
    if last and initial:
        copy.append(initial[i])
    initial = copy

'''
while changed:
    changed = False
    copy = []
    length = len(initial)
    idx = 0
    while idx < length:
        if idx == length - 1:
            copy.append(initial[idx])
            idx += 1
        else:
            a = initial[idx]
            b = initial[idx + 1]
            if a.lower() == b.lower() and a != b:
                idx += 2
                changed = True
            else:
                copy.append(a)
                idx += 1
    initial = copy
'''
print("Reduced string: ", ''.join(initial))
