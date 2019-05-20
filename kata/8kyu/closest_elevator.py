'''
codewars.com
Problem: Closest elevator
Date: 21/03/2019
'''

def elevator(l, r, c):
    lc = abs(l - c)
    rc = abs(r - c)

    if lc == rc:
        return 'right'
    elif lc < rc:
        return 'left'
    else:
        return 'right'

print(elevator(0, 1, 0))
print(elevator(0, 1, 1))
print(elevator(0, 1, 2))
print(elevator(0, 0, 0))
print(elevator(0, 2, 1))
