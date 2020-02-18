'''
codewars.com
Problem: Watermelon
Date: 19/02/2020
'''

def divide(w):
    if w <= 2:
        return False
    if w & 1 == 1:
        return False
    return True


if __name__ == '__main__':
    print(divide(4))
    print(divide(2))
    print(divide(5))
    print(divide(88))
    print(divide(100))
    print(divide(67))
    print(divide(90))
    print(divide(10))
    print(divide(99))
    print(divide(32))
