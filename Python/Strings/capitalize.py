# Capitalize each word in a user provided phrase
# Words are seperated by one or more spaces

msg = input("Enter a phrase: ")
space = False
length = len(msg)
msg = list(msg)
if msg: # only go into the loop if we have actual data, will prevent the first capitalization from crashing
    # Always uppercase the first word
    msg[0] = msg[0].upper()
    count = 0
    while count < length:
        # If we have found a space right before and are not on another space
        # capitalize the letter
        if space and msg[count] != ' ': 
            space = False 
            msg[count] = msg[count].upper()
        # If we find a space turn on space flag to indicate we need to capitalize 
        # the next non-space character
        elif msg[count] == ' ':
            space = True
        count += 1

print(''.join(msg))
