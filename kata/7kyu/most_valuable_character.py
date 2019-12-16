'''
  codewars.com
  Problem: Most valuable character
  17/12/2019
'''

def solve(s):
    f = [-1] * 26
    a = [-1] * 26
    for i in range(len(s)):
        v = ord(s[i]) - ord('a')
        if f[v] == -1:
            f[v] = i
            a[v] = 0
        else:
            a[v] = i - f[v]

    r = 0
    m = -1
    for i in range(len(f)):
        if a[i] > m:
            m = a[i]
            r = chr(ord('a') + i)
    return r

print(solve('a'))
print(solve('aa'))
print(solve('bcd'))
print(solve('axyzxyz'))
print(solve('aabccc'))
