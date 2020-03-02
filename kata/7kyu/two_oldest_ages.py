'''
  codewars.com
  Problem: Two oldest ages
  03/03/2020
'''

def two_oldest_ages(ages):
    a = min(ages[0], ages[1])
    b = max(ages[0], ages[1])

    for i in range(2, len(ages)):
        if ages[i] > b:
            a = b
            b = ages[i]
        elif ages[i] > a:
            a = ages[i]
    return a,b

print(two_oldest_ages([1, 5, 87, 45, 8, 8]))
print(two_oldest_ages([6, 5, 83, 5, 3, 18]))
print(two_oldest_ages([10, 1]))
