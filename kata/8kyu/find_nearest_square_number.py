'''
codewars.com
Problem: Find nearest square number
Date: 27/07/2019
'''

import math

def nearest_sq(n):
    s = int(math.sqrt(n))
    a = abs(n - (s * s))
    b = abs(n - ((s + 1) * (s + 1)))
    if a < b:
        return s * s
    else:
        return (s + 1) * (s + 1)

print(nearest_sq(1))
print(nearest_sq(2))
print(nearest_sq(10))
print(nearest_sq(111))
print(nearest_sq(9999))
