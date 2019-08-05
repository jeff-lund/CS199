'''
Take in a phrase, for letters which appear at the start of
more than one word print out the letter and the number of occurances
If all first letters are unique print out 'All Unique'
'''
phrase = input("Enter a phrase: ")
# We want case-insensitivity and the split up the phrase
# into multiple words. Can chain string methods
phrase = phrase.lower().split(' ')

# create a freqency table for the 26 letters
freq = [0 for _ in range(26)]
alpha = 'abcdefghijklmnopqrstuvwxyz'

for word in phrase:
    # Will ignore empty strings, can happen if you put a
    # space at the end or two spaces between letters
    # Not necessary for the problem
    if word:
        letter = word[0]
        # Find the proper index in the frequency table 
        # to update
        for i in range(26):
            if alpha[i] == letter:
                freq[i] += 1
# Store all the letter/freqency pairs to be printed
to_print = []
for i in range(26):
    # Only want to save pairs when the letter appeared more than once
    if freq[i] > 1:
        to_print.append((alpha[i], freq[i]))

# True if to_print is not empty
if to_print:
    for l, f in to_print:
        print(l, f)
# False if to_print is empty, no pairs were added 
else:
    print("All unique")

