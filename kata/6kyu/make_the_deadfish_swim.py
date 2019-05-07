'''
  codewars.com
  Problem: Make the deadfish swim
  07/05/2019
'''

def parse(d):
    r = []
    i = 0
    for c in d:
        if c == 'i':
            i = i + 1
        elif c == 'd':
            i = i - 1
        elif c == 's':
            i = i * i
        elif c == 'o':
            r.append(i)
    return r

print(parse("ooo"))
print(parse("ioioio"))
print(parse("idoiido"))
print(parse("isoisoiso"))
print(parse("codewars"))
