'''
  codewars.com
  Problem: sum of all the multiples of 3 or 5
  14/05/2019
'''

def sum(n, d):
    t = int(n / d)
    return int((((d << 1) + (t - 1) * d) / 2) * t)

def find(n):
    return sum(n, 3) + sum(n, 5) - sum(n, 15)

print(find(5))
print(find(10))
