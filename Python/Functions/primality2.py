import math

def is_prime(n):
    if n < 2:
        return False
    elif n == 2:
        return True
    elif n % 2 == 0:
        return False

    count = 3
    while count < math.sqrt(n):
        if n % count == 0:
            return False
        count += 2
    return True

