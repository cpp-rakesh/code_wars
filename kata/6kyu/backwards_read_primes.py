'''
  codewars.com
  Problem: Backwards read primes
  09/05/2019
'''

import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True

def is_palindrome(a, b):
    return a == b

def reverse(n):
    s = str(n)
    s = s[::-1]
    return int(s)

def backwardsPrime(s, e):
    l = []
    for i in range(s, e + 1):
        if is_prime(i):
            j = reverse(i)
            if not is_palindrome(i, j) and is_prime(j):
                l.append(i)
    return l

print(backwardsPrime(9900, 10000))
