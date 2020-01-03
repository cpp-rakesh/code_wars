'''
  codewars.com
  Problem: Row of the odd triangle
  04/01/2020
'''

def odd_row(n):
    m = (n * (n - 1)) / 2
    s = (2 * m) + 1
    r = []
    for i in range(n):
        r.append(s)
        s += 2
    return r


print(odd_row(1))
print(odd_row(2))
print(odd_row(13))
print(odd_row(41))
