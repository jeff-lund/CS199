import random
import math

# Guessing game: The user has 4 chances to guess a number
# between 1 and 20.
# If their guess is wrong then let them know if they were
# too high or too low.

# flag if the user has won the game or not.
# only continue to get guesses if the user has not won
won = False
# create target number
answer = math.floor(random.random() * 20) + 1
# Debug print
print(answer)

guess = int(input("Enter a number (||||): "))

if guess == answer:
    won = True
else:
    if guess < answer:
        print("Too low")
    else:
        print("Too high")

if won == False:
    guess = int(input("Enter a number (|||): "))
    if guess == answer:
        won = True
    else:
        if guess < answer:
            print("Too low")
        else:
            print("Too high")

if won == False:
    guess = int(input("Enter a number (||): "))
    if guess == answer:
        won = True
    else:
        if guess < answer:
            print("Too low")
        else:
            print("Too high")

if won == False:
    guess = int(input("Enter a number (|): "))
    if guess == answer:
        won = True
    else:
        if guess < answer:
            print("Too low")
        else:
            print("Too high")

if won == True:
    print("You win")
else:
    print("You lose, the answer was", answer)
