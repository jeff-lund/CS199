import doctest

def multiplier(*args):
    '''
    This multiplies a sequence of numbers.
    >>> multiplier(2, 4, 10)
    80
    >>> multiplier(3, 3, 3)
    27
    '''
    product = 0
    for n in args:
        product *= n
    return product

if __name__ == "__main__":
    doctest.testmod()
