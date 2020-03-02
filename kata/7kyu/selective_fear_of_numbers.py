'''
  codewars.com
  Problem: Selective fear of numbers
  03/03/2020
'''

def am_I_afraid(d, n):
    r = False
    if d == 'Monday':
        if n == 12:
            r = True
    elif d == 'Tuesday':
        if n > 95:
            r = True
    elif d == 'Wednesday':
        if n == 34:
            r = True
    elif d == 'Thursday':
        if n == 0:
            r = True
    elif d == 'Friday':
        if n & 1 == 0:
            r = True
    elif d == 'Saturday':
        if n == 56:
            r = True
    else:
        if n == 666 or n == -666:
            r = True
    return r

print(am_I_afraid("Monday", 13))
print(am_I_afraid("Sunday", -666))
print(am_I_afraid("Tuesday", 2))
print(am_I_afraid("Tuesday", 965))
print(am_I_afraid("Friday", 2))
