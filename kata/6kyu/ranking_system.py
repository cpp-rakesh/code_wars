'''
  codewars.com
  Problem: Ranking System
  21/05/2019
'''

def index(a, n, s, e):
    if n == a[s]:
        return s + 1
    if n == a[e]:
        return e + 1
    if s == e:
        return s + 1

    m = (s + e) >> 1
    if n > a[m]:
        return index(a, n, s, m + 1)
    else:
        return index(a, n, m, e)

def rankings(a):
    l = sorted(a, reverse=True)

    r = []
    for i in a:
        r.append(index(l, i, 0, len(a) - 1))
    return r

print(rankings([1,3,2]))
print(rankings([1,2,3,4,5]))
print(rankings([3,4,1,2,5]))
print(rankings([10,20,40,50,30]))
print(rankings([1, 10]))
print(rankings([22, 33, 18, 9, 110, 4, 1, 88, 6, 50]))
