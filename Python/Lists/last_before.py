seq = []
size = 0

n = int(input("enter a nonzero number: "))
if n == 0:
    print('no data')
else:
    while n != 0:
        seq.append(n)
        size += 1
        n = int(input("enter a nonzero number: "))
    last = seq[size - 1]
    # pretend we removed the last element so we do not
    # compare against it
    size -= 1
    again = False
    c = 0

    while c < size:
        if seq[c] == last:
            again = True
        c += 1

    if again:
        print("The last number appeared again")
    else:
        print("The last number did not appear again")
    

