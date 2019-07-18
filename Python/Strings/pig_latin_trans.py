from pig_latin import *

def translate(word):
    ret = []
    cap = word[0].isupper()
    # word starts with a vowel
    if is_vowel(word[0]):
            ret = word + ['y', 'a', 'y']
    # Word starts with a consonant
    else:
        cons = []
        end = []
        i = 0
        while i < len(word) and not is_vowel(word[i]):
            cons.append(word[i])
            i += 1
        while i < len(word):
            end.append(word[i])
            i += 1
        ret = end + cons + ['a', 'y']
    ret = [letter.lower() for letter in ret]
    if cap:
        ret[0] = ret[0].upper()
    return ret

phrase = input()
print("Original phrase:", phrase)

l = len(phrase)
idx = 0
final = []
word = []

while idx < l:
    if is_punc(phrase[idx]) or phrase[idx] == ' ':
        if word:
            final = final + translate(word)
            word = []
        final.append(phrase[idx])
    else:
        word.append(phrase[idx])
    idx += 1
if word:
    final = final + translate(word)
print(''.join(final))
