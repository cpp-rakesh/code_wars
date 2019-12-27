'''
  codewars.com
  Problem: Numbers in strings
  26/12/2019
'''

def solve(s):
    r = ''
    for c in s:
        if c.isnumeric() == True:
            r += c
        else:
            r += ' '
    n = 0
    for num in r.split():
        num = int(num)
        if num > n:
            n = num
    return n

print(solve('gh12cdy695m1')) # 695
print(solve('2ti9iei7qhr5')) # 9
print(solve('vih61w8oohj5')) # 61
print(solve('f7g42g16hcu5')) # 42
print(solve('lu1j8qbbb85'))  # 85

