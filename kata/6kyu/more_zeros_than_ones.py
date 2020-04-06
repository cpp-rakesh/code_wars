'''
  codewars.com
  Problem: More zeros than ones
  06/04/2020
'''

def more(n):
    zz = 0
    nz = 0
    while n:
        if n & 1 == 1:
            nz += 1
        else:
            zz += 1
        n = n >> 1
    return zz > nz

def more_zeros(s):
    dd = []
    for c in range(128):
        dd.append(more(c))

    pos = [False] * 128

    r  = []
    for c in s:
        index = ord(c)
        if dd[index] and pos[index] == False:
            r.append(c)
            pos[index] = True

    return r

if __name__ == '__main__':
    print(more_zeros('abcde'))
    print(more_zeros('thequickbrownfoxjumpsoverthelazydog'))
    print(more_zeros('THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG'))
    print(more_zeros('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890_'))
    print(more_zeros('DIGEST'), ['D', 'I', 'E', 'T'])
