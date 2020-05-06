'''
  codewars.com
  Problem: Return the first M muliplies of N
  07/05/2020
'''

def multiples(m, n):
    return [v * n for v in range(1, m + 1)]

if __name__ == '__main__':
    print(multiples(3, 5))
