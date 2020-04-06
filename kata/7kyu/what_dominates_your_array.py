'''
  codewars.com
  Problem: What dominates your array
  06/04/2020
'''

def dominator(arr):
    d = {}
    for n in arr:
        if n in d:
            d[n] += 1
        else:
            d[n] = 1
    result = -1
    for k, r in d.items():
        if r > len(arr) >> 1:
            result = k
    return result

if __name__ == '__main__':
    print(dominator([3,4,3,2,3,1,3,3]))
    print(dominator([1,2,3,4,5]))
    print(dominator([1,1,1,2,2,2]))
    print(dominator([1,1,1,2,2,2,2]))
    print(dominator([]))
