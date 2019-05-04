'''
  codewars.com
  Problem: Going to the cinema
  04/05/2019
'''

import math
def movie(c, t, p):
    i = 0
    card = c
    f = t
    while (math.ceil(card) >= (t * i)):
        card = card + f
        f = f * p
        i = i + 1
    return i - 1


print(movie(500, 15, 0.9))
print(movie(100, 10, 0.95))
