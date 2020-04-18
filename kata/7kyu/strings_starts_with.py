'''
  codewars.com
  Problem: Strings: starts with
  18/04/2020
'''

def starts_with(st, prefix):
    if len(prefix) > len(st):
        return False
    return prefix == st[:len(prefix)]

if __name__ == '__main__':
    print(starts_with("hello world!", "hello"))
    print(starts_with("hello world!", "HELLO"))
    print(starts_with("nowai", "nowaisir"))
