import random
import math

trials = 100000
# monte carlo simulation
success = 0
c = 0
while c < trials:
    hand = []
    hand_count = 0
    # create hand
    while hand_count < 5:
        r = math.floor(random.random() * 52)
        i = 0
        to_add = True
        # ensure pulling five  unique values from deck
        while i < hand_count:
            if hand[i] == r:
                to_add = False
            i = i + 1
        if to_add: # Good draw, add it to the hand
            hand.append(r)
            hand_count += 1

    counts = [] # frequency table for counts of each card value 
    j = 0
    while j < 13:
        counts.append(0) # initialize all counts to 0
        j = j + 1
    # get count of each value from cards in hand
    h = 0
    while h < hand_count:
        hand[h] = hand[h] % 13
        counts[hand[h]] = counts[hand[h]] + 1
        h = h + 1
    # a full house is the same as two of a kind and three of a kind
    twos = 0 # flag for two of a kind
    threes = 0 # flag for three of a kind
    j = 0
    while j < 13:
        if counts[j] == 2:
            twos = 1
        elif counts[j] == 3:
            threes = 1
        j = j + 1
    # success if we have both a two and three of a kind
    if twos == 1 and threes == 1:
        success = success + 1
    c = c + 1

print("probability of a fullhouse: {:.4f}%.".format(success / trials * 100))
