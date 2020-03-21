'''
codewars.com
Problem: Beginner series #2 clock
Date: 21/03/2020
'''

def past(h, m, s):
    return ((h * 3600) + (m * 60) + s) * 1000

print(past(0,1,1))
print(past(1,1,1))
print(past(0,0,0))
print(past(1,0,1))
print(past(1,0,0))
