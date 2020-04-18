'''
  codewars.com
  Problem: Points in segments
  18/04/2020
'''

import sys

def segments(m, a):
    r = []

    for i in range(m + 1):
        found = False
        for t in a:
            if i >= t[0] and i <= t[1]:
                found = True
                break
        if found == False:
            r.append(i)
    return r

if __name__ == '__main__':
    print(segments(5, [(2, 2), (1, 2), (5, 5)]))
    print(segments(7, [(0, 7)]))
