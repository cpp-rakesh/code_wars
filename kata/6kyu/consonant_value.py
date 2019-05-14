'''
  codewars.com
  Problem: consonant value
  14/05/2019
'''

def vowel(c):
    return c in 'aeiou'

def weight(s):
    w = 0
    for c in s:
        w = w + ord(c) - ord('a') + 1
    return w

def solve(s):
    w = ''
    l = []
    for c in s:
        if vowel(c):
            l.append(w)
            w = ''
        else:
            w = w + c

    r = 0
    for w in l:
        r = max(r, weight(w))
    return r

print(solve("zodiac"))
print(solve("chruschtschov"))
print(solve("khrushchev"))
print(solve("strength"))
print(solve("catchphrase"))
print(solve("twelfthstreet"))
print(solve("mischtschenkoana"))

