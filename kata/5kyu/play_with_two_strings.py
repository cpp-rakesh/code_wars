'''
  codewars.com
  Problem: Play with two strings
  18/05/2020
'''

def convert(c):
    if c.isupper() == True:
        return c.lower()
    return c.upper()

def work_on_strings(a, b):
    da = [0] * 26
    db = [0] * 26

    for c in a:
        if c.isupper() == True:
            da[ord(c) - ord('A')] += 1
        else:
            da[ord(c) - ord('a')] += 1
    for c in b:
        if c.isupper() == True:
            db[ord(c) - ord('A')] += 1
        else:
            db[ord(c) - ord('a')] += 1

    r = ''
    for c in a:
        i = 0
        if c.isupper() == True:
            i = ord(c) - ord('A')
        else:
            i = ord(c) - ord('a')

        if db[i] & 1 == 1:
            r += convert(c)
        else:
            r += c

    for c in b:
        i = 0
        if c.isupper() == True:
            i = ord(c) - ord('A')
        else:
            i = ord(c) - ord('a')

        if da[i] & 1 == 1:
            r += convert(c)
        else:
            r += c
    return r

if __name__ == '__main__':
    print(work_on_strings("abc","cde"))
    print(work_on_strings("abcdeFgtrzw", "defgGgfhjkwqe"))
    print(work_on_strings("abcdeFg", "defgG"))
    print(work_on_strings("abab", "bababa"))
