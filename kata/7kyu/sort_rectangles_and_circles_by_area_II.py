'''
  codewars.com
  Problem: Sort rectangles and circles by area II
  18/04/2020
'''

import math

def sort_by_area(seq):
    d = {}
    for s in seq:
        if isinstance(s, tuple):
            d[s] = s[0] * s[1]
        else:
            d[s] = math.pi * s * s
    d = {k: v for k, v in sorted(d.items(), key=lambda item: item[1])}
    return [k for k, v in d.items()]


if __name__ == '__main__':
    print(sort_by_area([ (4.23, 6.43), 1.23, 3.444, (1.342, 3.212) ]))
    print(sort_by_area([ (2, 5), 6 ]))
    print(sort_by_area([]))
