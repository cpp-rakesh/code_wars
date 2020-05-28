'''
  codewars.com
  Problem: Array.diff
  29/05/2020
'''

def array_diff(a, b):
    r = []
    for e in a:
        if e not in b:
            r.append(e)
    return r

if __name__ == '__main__':
    print(array_diff([1,2], [1]))
    print(array_diff([1,2,2], [1]))
    print(array_diff([1,2,2], [2]))
    print(array_diff([1,2,2], []))
    print(array_diff([], [1,2]))
