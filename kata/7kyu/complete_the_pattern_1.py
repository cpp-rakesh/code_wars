'''
codewars.com
Problem: Complete the pattern #1
Date: 10/02/2020
'''

def pattern(n):
    r = ''
    for i in range(1, n + 1):
        for j in range(i):
            r += str(i)
        r += '\n'
    return r[:-1]

if __name__ == '__main__':
    print(pattern(1))
    print(pattern(2))
    print(pattern(5))
