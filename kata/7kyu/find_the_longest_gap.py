'''
  codewars.com
  Problem: Find the longest gap!
  17/12/2019
'''

def gap(n):
    b = ''
    while n > 0:
        b = b + str(n % 2)
        n = int(n / 2)

    p = []
    for i in range(len(b)):
        if b[i] == '1':
            p.append(i)
    r = 0
    for i in range(1, len(p)):
        if p[i] - p[i - 1] > r:
            r = p[i] - p[i - 1] - 1;

    return r


print(gap(9))
print(gap(529))
print(gap(20))
print(gap(15))
