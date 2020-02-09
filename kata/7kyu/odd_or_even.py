'''
codewars.com
Problem: Odd or even
Date: 10/02/2020
'''

def odd_or_even(arr):
    s = 0
    for n in arr:
        s += n
    if s & 1:
        return 'odd'
    else:
        return 'even'

if __name__ == '__main__':
    print(odd_or_even([0, 1, 2]))
    print(odd_or_even([0, 1, 3]))
    print(odd_or_even([1023, 1, 2]))
