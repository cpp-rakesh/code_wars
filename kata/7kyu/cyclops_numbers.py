'''
  codewars.com
  Problem: Cyclops numbers
  18/04/2020
'''

def binary(n):
    b = ''
    while n:
        b += str(n % 2)
        n >>= 1
    return b

def cyclops (n):
    b = binary(n)
    if len(b) & 1 == False:
        return False
    if b.count('0') != 1:
        return False
    if b[len(b) >> 1] != '0':
        return False
    return True

if __name__ == '__main__':
    print(cyclops(1))
    print(cyclops(5))
    print(cyclops(3))
    print(cyclops(11))
    print(cyclops(13))
    print(cyclops(23))
    print(cyclops(27))
