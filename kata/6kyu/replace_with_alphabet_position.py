'''
  codewars.com
  Problem: Replace with alphabet position
  22/06/2019
'''

def alphabet_position(t):
    r = ''
    for c in t:
        if c.isupper() == True:
            r = r + str(ord(c) - ord('A') + 1) + ' '
        if c.islower() == True:
            r = r + str(ord(c) - ord('a') + 1) + ' '
    return r[:-1]

print(alphabet_position("The sunset sets at twelve o' clock.")) # "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
print(alphabet_position("The narwhal bacons at midnight."))     # "20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"
