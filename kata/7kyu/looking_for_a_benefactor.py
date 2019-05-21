'''
  codewars.com
  Problem: Looking for a benefactor
  21/05/2019
'''

import math

def new_avg(a, n):
    s = 0
    for i in a:
        s = s + i
        r = (n * (len(a) + 1)) - s
    if r >= 0:
        return math.ceil(r)
    else:
        raise ValueError('Error')
print(new_avg ([14, 30, 5, 7, 9, 11, 16], 90))
print(new_avg ([14, 30, 5, 7, 9, 11, 15], 92))
print(new_avg ([14, 30, 5, 7, 9, 11, 15], 2))
