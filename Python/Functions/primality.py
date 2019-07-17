def is_prime(n):
    if n < 2:
        return False
    
    count = 2
    while count < n:
        if n % count == 0:
            return False
        count += 1
    return True

