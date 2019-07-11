from pig_latin import is_vowel
msg = input("enter a phrase: ")
l = len(msg)
msg2 = []
c = 0
while c < l:
    if not is_vowel(msg[c]):
        msg2.append(msg[c])
    c += 1

print(''.join(msg2))
