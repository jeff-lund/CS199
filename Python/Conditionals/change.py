import math

pennies = int(input("Enter the number of pennies: "))

dollars = math.floor(pennies / 100)
pennies = pennies - dollars * 100

quarters = math.floor(pennies / 25)
pennies = pennies - quarters * 25

dimes = math.floor(pennies / 10)
pennies = pennies - dimes * 10

nickels = math.floor(pennies / 5)
pennies = pennies - nickels * 5

print("You get {} dollars, {} quarters, {} dimes, {} nickels, and {} pennies in change." \
        .format(dollars, quarters, dimes, nickels, pennies))
