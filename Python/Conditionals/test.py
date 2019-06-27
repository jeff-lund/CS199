required_height=52
required_age=10
age=float(input("How old are you?"))
height=float(input("How tall are you in inches?"))
if(age>=required_age or height>required_height):
    print("You are allowed to ride.")
else:
    print("You are NOT allowed to ride.")

