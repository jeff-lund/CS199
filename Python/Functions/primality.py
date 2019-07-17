def is_prime(n):
    if n < 2:
        return False
    
    count = 2
    while count < n:
        if n % count == 0:
            return False
        count += 1
    return True

def is_prime_test():
    if is_prime(5):
        print("test passed")
    else:
        print("test failed")
    if is_prime(6):
        print("test failed")
    else:
        print("test passed")
        

if __name__ == '__main__':
    is_prime_test()
