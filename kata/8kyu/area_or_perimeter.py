'''
codewars.com
Problem: Area or perimeter
Date: 10/02/2020
'''

def area_or_perimeter(l , w):
    if l == w:
        return l * w
    else:
        return 2 * (l + w)


def test():
    print(area_or_perimeter(4, 4))
    print(area_or_perimeter(6, 10))

if __name__ == '__main__':
    test()
