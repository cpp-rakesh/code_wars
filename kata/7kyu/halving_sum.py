'''
  codewars.com
  Problem: Halving sum
  18/04/2020
'''

def halving_sum(n):
    s = 0
    while n > 0:
        s += n
        n = int(n >> 1)
    return s

if __name__ == '__main__':
    print(halving_sum(25))
    print(halving_sum(127))
