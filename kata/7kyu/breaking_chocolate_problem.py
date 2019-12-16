'''
  codewars.com
  Problem: Breaking chocolate problem
  17/12/2019
'''

def breakChocolate(n, m):
    if n > 1 or m > 1:
        return (n * m) - 1
    return 0

print(breakChocolate(5, 5))
print(breakChocolate(1, 1))
