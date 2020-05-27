'''
  codewars.com
  Problem: Search for letters
  27/05/2020
'''

def change(st):
    d = {}
    for c in st:
        if c >= 'a' and c <= 'z':
            d[ord(c) - ord('a')] = 1
        if c >= 'A' and c <= 'Z':
            d[ord(c) - ord('A')] = 1

    r = ''
    for i in range(26):
        if i in d:
            r += '1'
        else:
            r += '0'
    return r

if __name__ == "__main__":
    print(change("rakesh"))
    print(change("meenakshi"))
    print(change("adwita"))
    print(change("atharv"))
