n = int(input())


'''
if n < 10:
    print("you are broke")
if n < 100:
    print("you can buy lunch at least")
if n < 1000:
    print("You can make rent at least")
'''

if n < 1000:
    print("you can make rent")
elif n < 100:
    print("you can buy lunch")
elif n < 10:
    print("you are broke")

