'''
  codewars.com
  Problem: Number zoo patrol
  18/05/2020
'''

def find_missing_number(n):
    i = len(n) + 1
    s = (i * (i + 1)) >> 1

    t = 0
    for e in n:
        t += e
    return s - t


if __name__ == '__main__':
    print(find_missing_number([2, 3, 4]))
    print(find_missing_number([1, 3, 4]))
    print(find_missing_number([1, 2, 4]))
    print(find_missing_number([1, 2, 3]))
