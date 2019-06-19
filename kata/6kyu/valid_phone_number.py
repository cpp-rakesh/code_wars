'''
  codewars.com
  Problem: Valid phone number
  20/06/2019
'''

def validPhoneNumber(p):
    if len(p) != 14:
        return False
    s = '(ddd) ddd-dddd'
    for i in range(len(p)):
        if s[i] == 'd':
            if p[i].isdigit() == False:
                return False
        elif s[i] != p[i]:
            return False
    return True

print(validPhoneNumber('(123) 456-7890'))
