'''
  codewars.com
  Problem: Tetris series scoring system
  03/03/2020
'''

def get_score(arr) -> int:
    p = [0, 40, 100, 300, 1200]
    s = 0
    l = 0
    for a in arr:
        s += p[a] * int((l / 10) + 1)
        l += a
    return s

print(get_score([0, 1, 2, 3, 4]))
print(get_score([0, 1, 1, 3, 0, 2, 1, 2]))
print(get_score([2, 0, 4, 2, 2, 3, 0, 0, 3, 3]))
print(get_score([0]))
print(get_score([]))
print(get_score([4, 2, 2, 1, 2, 1, 3, 2, 0, 1, 4, 1, 1, 1, 1, 3, 2, 3, 2, 0, 0, 4, 2, 1, 1, 2, 2, 0, 2, 3, 3, 0, 1, 3, 2, 3, 1, 4, 4, 1, 3, 1, 2, 2, 1, 0, 1, 2, 0]))

