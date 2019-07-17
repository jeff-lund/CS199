def left_pad(word, width, pad):
    l = len(word)
    i = 0
    l = width - l
    while i < l:
        print(pad, end='')
        i += 1
    print(word)

if __name__ == '__main__':
    words = []
    n = input('enter a word: ')
    while n != 'n':
        words.append(n)
        n = input('enter a word: ')
    width = 10
    pad = '*'
    for word in words:
        left_pad(word, width, pad)
