'''
  codewars.com
  Problem: Numbers with the highest amount of divisors
  21/05/2019
'''

import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def divisors(n):
    c = 2
    for i in range(2, int(math.sqrt(n)) + 1):
        k = int(n / i)
        if n % i == 0:
            c = c + 1
        if k != i and n % k == 0:
            c = c + 1
    return c

def proc_arrInt(l):
    m = 0
    r = []
    p = 0
    for n in l:
        if is_prime(n):
            p = p + 1
        d = divisors(n)
        if d == m:
            r.append(n)
        elif d > m:
            m = d
            r = []
            r.append(n)
    r.sort()
    return [len(l), p, [m, r]]

a = [66, 36, 49, 40, 73, 12, 77, 78, 76, 8, 50, 20, 85, 22, 24, 68, 26, 59, 92, 93, 30]
print(proc_arrInt(a))

a = [267, 273, 271, 145, 275, 150, 487, 169, 428, 50, 314, 444, 445, 67, 458, 211, 58, 95, 357, 486, 359, 491, 108, 493, 247, 379]
print(proc_arrInt(a))
