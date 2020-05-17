'''
  codewars.com
  Problem: Unique string characters
  17/05/2020
'''

def solve(a ,b):
    da = [0] * 26
    db = [0] * 26

    for c in a:
        da[ord(c) - ord('a')] += 1
    for c in b:
        db[ord(c) - ord('a')] += 1

    r = ''
    for c in a:
        i = ord(c) - ord('a')
        if da[i] != 0 and db[i] == 0:
            r += c
    for c in b:
        i = ord(c) - ord('a')
        if db[i] != 0 and da[i] == 0:
            r += c
    return r

if __name__ == "__main__":
    print(solve("xyab","xzca"))
    print(solve("xyabb","xzca"))
    print(solve("abcd","xyz"))
    print(solve("xxx","xzca"))
