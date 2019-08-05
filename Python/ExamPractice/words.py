import pig_latin as pl
word = input("Enter a word (n to terminate): ")
vowel= []
cons = []
while word != 'n':
    if pl.is_vowel(word[0]):
        vowel.append(word)
    else:
        cons.append(word)
    word = input("Enter a word (n to terminate): ")

for word in vowel:
    print(word, end=' ')
length = len(cons) - 1
while length >= 0:
    print(cons[length], end=' ')
    length -= 1
print()
