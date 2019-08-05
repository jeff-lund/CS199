'''
Same idea as first_letter.py but using a dictionary
instead of a freqency table.
'''
phrase = input("Enter a phrase: ")
phrase = phrase.lower().split(' ')

# keys will be first letters of each word
# values will be the count of appearences
letters = {}

for word in phrase:
    if word:
        letter = word[0]
        # Add the letter as a key to the dictionary
        # on the first occurance of the letter
        if letter not in letters:
            letters[letter] = 0
        # Increment count
        letters[letter] += 1

# Using a list comprehension to iterate through the dictionary
# Adding key,value pairs using a conditional to not add 
# letters that only appear once
to_print = [(key, val) for key, val in letters.items() if val > 1]
        
if to_print:
    # Use tuple unpacking to extract values from list
    for letter, count in to_print:
        print(letter, count)
else:
    print("All unique")

