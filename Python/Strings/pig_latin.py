def is_vowel(c):
    return c in 'aeiouAEIOU'

def is_consonant(c):
    return c.isalpha() and not is_vowel(c)

def is_punc(c):
    return c in '.,?![]{}()"\';:'
