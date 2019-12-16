'''
  codewars.com
  Problem: Something capitalized
  17/12/2019
'''

def testit(s):
    r = ''
    for w in s.split():
        c = w[-1]
        c = chr(ord('A') + (ord(c) - ord('a')))
        r = r + w[:-1] + c + ' '
    return r[:-1]


print(testit(""))
print(testit("a"))
print(testit("b"))
print(testit("a a"))
print(testit("a b"))
print(testit("a b c"))
print(testit("ndlq rhwx tuas xbkb nlqk"))
