'''
  codewars.com
  Problem: Shuffled Array
  22/12/2019
'''

def shuffled_array(s):
    s.sort()
    a = 0
    for n in s:
        a += n
    b = 0
    for n in s:
        if a - n == n:
            b = n
    r = []
    found = False
    for n in s:
        if n == b and found == False:
            found = True
        else:
            r.append(n)
    return r

print(shuffled_array([1, 12, 3, 6, 2]))
print(shuffled_array([1, -3, -5, 7, 2]))
print(shuffled_array([2, -1, 2, 2, -1]))
print(shuffled_array([-3, -3]))
