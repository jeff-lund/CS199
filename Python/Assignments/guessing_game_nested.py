import random
import math

# User has 4 chances to guess a number between 1 - 20
# If they get it wrong let them know if their answer was too
# high or too low.

# Set up actual answer to be guessed
answer = math.floor(random.random() * 20) + 1
print(answer)
print("Guess the number I'm think of (1-20). You have 4 attempts.")

# Guess 1
guess = int(input("Enter a number(||||): "))

if guess == answer:
    print("You win")
else:
    if guess > answer:
        print("Too high")
    else:
        print("Too low")
    
    # Guess 2
    guess = int(input("Enter a number (|||): "))
    
    if guess == answer:
        print("You win")
    else:
        if guess > answer:
            print("Too high")
        else:
            print("Too low")
        
        # Guess 3
        guess = int(input("Enter a number (||): "))
        
        if guess == answer:
            print("You win")
        else:
            if guess > answer:
                print("Too high")
            else:
                print("Too low")
            
            # Guess 4
            guess = int(input("Enter a number (|): "))
            
            if guess == answer:
                print("You win")
            else:
                print("You lose")		
