'''
codewars.com
Problem: Total amount of points
Date: 06/05/2019
'''

def points(g):
    r = 0
    for i in g:
        x, y = i.split(':')
        if x > y:
            r = r + 3
        elif x == y:
            r = r + 1
            return r
