'''
  codewars.com
  Problem: simple remove duplicates
  04/08/2019
'''

def solve(arr):
    d = {}
    r = []
    for a in reversed(arr):
        if a not in d:
            d[a] = 1
            r.append(a)
    r.reverse()
    return r

print(solve([3,4,4,3,6,3]))
print(solve([1,2,1,2,1,2,3]))
print(solve([1,2,3,4]))
print(solve([1,1,4,5,1,2,1]))

