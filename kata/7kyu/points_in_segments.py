'''
  codewars.com
  Problem: Points in segments
  18/04/2020
'''

def segments(m, a):
    d = [0] * (m + 1)
    for v in a:
        for i in range(v[0], v[1] + 1):
            d[i] = 1
    r = []
    for i in range(m + 1):
        if d[i] == 0:
            r.append(i)
    return r

if __name__ == '__main__':
    print(segments(5, [(2, 2), (1, 2), (5, 5)]))
    print(segments(7, [(0, 7)]))
