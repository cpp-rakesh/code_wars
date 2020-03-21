'''
codewars.com
Problem: Find the difference btetween oldest and youngest family members
Date: 21/03/2020
'''

def difference_in_ages(ages):
    a_min = ages[0]
    a_max = ages[0]

    for a in ages:
        a_min = min(a, a_min)
        a_max = max(a, a_max)
    return (a_min, a_max, a_max - a_min)

print(difference_in_ages([16, 22, 31, 44, 3, 38, 27, 41, 88]))
print(difference_in_ages([5, 8, 72, 98, 41, 16, 55]))
print(difference_in_ages([57, 99, 14, 32]))
print(difference_in_ages([62, 0, 3, 77, 88, 102, 26, 44, 55]))
print(difference_in_ages([2, 44, 34, 67, 88, 76, 31, 67]))
print(difference_in_ages([46, 86, 33, 29, 87, 47, 28, 12, 1, 4, 78, 92]))
print(difference_in_ages([66, 73, 88, 24, 36, 65, 5]))
print(difference_in_ages([12, 76, 49, 37, 29, 17, 3, 65, 84, 38]))
print(difference_in_ages([0, 110]))
print(difference_in_ages([33, 33, 33]))
