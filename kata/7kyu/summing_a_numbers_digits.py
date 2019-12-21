'''
  codewars.com
  Problem: Summing a number's digit
  22/12/2019
'''

def sum_digits(number):
    s = str(number)
    if s[0] == '-':
        s = s[1:]
    r = 0
    for c in s:
        r += ord(c) - ord('0')
    return r

print(sum_digits(10))
print(sum_digits(99))
print(sum_digits(-32))
