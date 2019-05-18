'''
  codewars.com
  Problem: Distance from the average
  18/05/2019
'''

def distances_from_average(l):
    a = 0
    for i in l:
        a = a + i
    a = a / float(len(l))

    r = []
    for i in l:
        r.append(round(a - i, 2))
    return r

print(distances_from_average([55, 95, 62, 36, 48]));
print(distances_from_average([1, 1, 1, 1, 1]));
print(distances_from_average([1, -1, 1, -1, 1, -1]));
print(distances_from_average([1, -1, 1, -1, 1]));
print(distances_from_average([2, -2]));
print(distances_from_average([1]));
print(distances_from_average([123, -65, 32432, -353, -534]));
