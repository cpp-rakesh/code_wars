'''
codewars.com
Problem: Sum of minimus!
Date: 10/02/2020
'''

def sum_of_minimums(n):
    s = 0
    for a in n:
        s += min(a)
    return s

if __name__ == '__main__':
    print(sum_of_minimums([ [ 7,9,8,6,2 ], [6,3,5,4,3], [5,8,7,4,5] ]))
    print(sum_of_minimums([ [11,12,14,54], [67,89,90,56], [7,9,4,3], [9,8,6,7]]))
