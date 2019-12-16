'''
  codewars.com
  Problem: Find the missing letter
  17/12/2019
'''

def find_missing_letter(chars):
    for i in range(1, len(chars)):
        if (ord(chars[i]) - ord(chars[i - 1])) != 1:
            return chr(ord(chars[i - 1]) + 1)

print(find_missing_letter(['a','b','c','d','f']))
print(find_missing_letter(['O','Q','R','S']))
