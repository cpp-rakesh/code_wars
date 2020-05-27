'''
  codewars.com
  Problem: basics 03 strings numbers and calculations
  28/05/2020
'''

def calculate_string(st):
    l = ''
    r = ''
    o = ''
    for c in st:
        if c in '+-*/':
            o = c
        if c in '0123456789.':
            if o == '':
                l += c
            else:
                r += c
    if o == '+':
        return str(round(float(l) + float(r)))
    if o == '-':
        return str(round(float(l) - float(r)))
    if o == '*':
        return str(round(float(l) * float(r)))
    if o == '/':
        return str(round(float(l) / float(r)))

if __name__ == '__main__':
    print(calculate_string(";$%§fsdfsd235??df/sdfgf5gh.000kk0000"))
    print(calculate_string("sdfsd23454sdf*2342"))
    print(calculate_string("fsdfsd235???34.4554s4234df-sdfgf2g3h4j442"))
    print(calculate_string("fsdfsd234.4554s4234df+sf234442"))
    print(calculate_string("a1a2b3c.c0c/a1a0b.cc00c"))
