n = int(input("enter a non zero number: "))
palindrome = []
while n != 0:
    palindrome.append(n)
    n = int(input("enter a non zero number: "))

sz = len(palindrome)
ind1 = 0
ind2 = sz - 1

flag = True
'''
while ind1 <= ind2 and flag:
    if palindrome[ind1] != palindrome[ind2]:
        flag = False
    ind1 += 1
    ind2 -= 1
if flag:
    print(palindrome, "is a palindrome")
else:
    print(palindrome, "is not a palindrome")
'''
reverse = []
print("Original palindrome: ", palindrome)
while sz > 0:
    sz -= 1
    reverse.append(palindrome[sz])
    print(reverse)
sz = len(palindrome)
while ind1 < sz and flag:
    if palindrome[ind1] != reverse[ind1]:
        flag = False
    ind1 += 1
if flag:
    print(palindrome, "is a palindrome")
else:
    print(palindrome, "is not a palindrome")
