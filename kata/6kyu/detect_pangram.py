'''
codewars.com
Problem: Detect pangram
Date: 15/03/2020
'''

import string

def is_pangram(s):
    a = [0] * 26
    for c in s:
        if c.isalpha():
            a[ord(c.lower()) - ord('a')] += 1

    r = True
    for d in a:
        if d == 0:
            r = False
            break
    return r

print(is_pangram('The quick, brown fox jumps over the lazy dog!'))
