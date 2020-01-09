'''
  codewars.com
  Problem: Cat and mouse Harder Version
  10/01/2020
'''

def cat_mouse(x,j):
    c = x.find('C')
    d = x.find('D')
    m = x.find('m')
    if c == -1 or d == -1 or m == -1:
        return 'boring without all three'
    elif abs((c - m) + 1) > j:
        return 'Escaped!'
    elif d >= c and d <= m or d >= m and d <= c:
        return 'Protected!'
    else:
        return 'Caught!'


print(cat_mouse('..D.....C.m', 2))                        # "Caught!"
print(cat_mouse('............C.............D..m...', 8))  # "Escaped!"
print(cat_mouse('m.C...', 5))                             # "boring without all three"
print(cat_mouse('.CD......m.', 10))                       # "Protected!"
print(cat_mouse('.CD......m.', 1))                        # "Escaped!"
print(cat_mouse('.........C..........m.D.', 10))          # "Caught!"
