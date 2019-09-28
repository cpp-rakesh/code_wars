'''
  codewars.com
  Problem: Spacify
  28/09/2019
'''

def spacify(string):
    r = ''
    for c in string:
        r = r + c
        r = r + ' '
    return r[:-1]

print(spacify("hello world"))
print(spacify("12345"))
print(spacify(""))
print(spacify("a"))
print(spacify("Pippi"))
