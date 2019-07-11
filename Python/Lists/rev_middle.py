n = int(input("Enter a number: "))
c = 0
li = []
while n != 0:
    li.append(n)
    c += 1
    n = int(input("Enter a number: "))
if c % 2 == 0:
    c1 = int(c / 2 - 1)
    c2 = int(c / 2)
    while c1 >= 0:
        print(li[c1], end=' ')
        c1 -= 1
    while c2 < c:
        print(li[c2], end=' ')
        c2 += 1
    print()
