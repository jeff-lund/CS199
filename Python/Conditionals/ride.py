
# CS 199
# Can you ride?

age = float(input("How old are you: "))
height = float(input("How tall are you in inches: "))

'''
# Solution 1
if(age >= 10 or height > 52):
    print("Congratulations, you can ride the rollercoaster!")
else:
    print("Sorry, you are not allowed to ride.")
'''
'''
# Solution 1b
# remember DeMorgan's Law?
if(not(age >= 10 or height > 52)):
    print("Sorry, you are not allowed to ride.")
else:
    print("Congratulations, you can ride the rollercoaster!")
'''

'''
# Solution 1c
if(age < 10 and height <= 52):
    print("I'm sorry you are not allowed to ride.")
else:
    print("Congratulations, you can ride the rollercoaster!")
'''
'''
# Solution 2
# Does this work?
if(age >= 10):
    print("Congratulations you can ride the rollercoaster!")
if(height > 52):
    print("Congratulations you can ride the rollercoaster!")
else:
    print("I'm sorry you are not allowed to ride.")

'''
'''
# Solution 3
# does this work?
if(age >= 10) :
    print("Congratulations you can ride the rollercoaster!")
elif(height > 52) :
    print("Congratulations you can ride the rollercoaster!")
else :
    print("I'm sorry you are not allowed to ride.")
'''

'''
# Solution 4
if(age >= 10):
    if(height > 52):
        print("Congratulations you can ride the rollercoaster!")
else:
    print("I'm sorry you are not allowed to ride.")
'''


# Solution 5
if(age >= 10) :
    print("Congratulations you can ride the rollercoaster!")
else:
    if(height > 52):
        print("Congratulations you can ride the rollercoaster!")
if(age < 10 and height <= 52):
    print("I'm sorry you are not allowed to ride.")

