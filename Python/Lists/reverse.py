data = []
size = 0
n = int(input("Enter a nonzero number: "))
while n != 0:
    data.append(n)
    size += 1
    n = int(input("Enter a nonzero number: "))
'''
while size > 0:
    size -= 1
    print(data[size], end=' ')
print()
'''
'''
size -= 1
while size >= 0:
    print(data[size], end=' ')
    size -= 1
print()
'''
c = 1
while c <= size:
    print(data[size - c], end=' ')
    c += 1
print()
