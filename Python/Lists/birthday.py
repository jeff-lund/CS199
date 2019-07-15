import random
import math

trials = 100000
ngroup = int(input("Enter how many people per group: "))
suc = 0
count = 0

while count < trials:
    # set up freq table
    bdays = []
    i = 0
    while i < 365:
        bdays.append(0)
        i += 1
    # generate ngroup birthdays
    i = 0
    while i < ngroup:
        r = math.floor(random.random() * 365)
        bdays[r] += 1
        i += 1
    # check for success
    flag = False
    i = 0
    while i < 365:
        if bdays[i] > 1:
            flag = True
        i += 1
    if flag:
        suc += 1
    count += 1
print("for a group of {} people there is a {}% chance at least 2 people share the same birthday.".format(ngroup, suc / trials * 100))
