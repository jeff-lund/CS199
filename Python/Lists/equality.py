n = int(input("enter a number: "))
l1 = []
while n != 0:
    l1.append(n)
    n = int(input("enter a number: "))

print("starting list 2")
n = int(input("enter a number: "))
l2 = []

while n != 0:
    l2.append(n)
    n = int(input("enter a number: "))

len_l2 = len(l2)
len_l1 = len(l1)

if len_l1 != len_l2:
    print("The lists are not equal")
else:
    c = 0
    flag = True
    while c < len_l1:
        if l1[c] != l2[c]:
            flag = False
        c += 1

    if flag:
        print("The lists are equal")
    else:
        print("They are not equal")
