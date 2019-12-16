'''
  codewars.com
  Problem: MinMaxMin
  17/12/2019
'''

def minMinMax(arr):
    min_value = arr[0]
    max_value = arr[0]
    for i in range(1, len(arr)):
        min_value = min(min_value, arr[i])
        max_value = max(max_value, arr[i])

    mid = 0
    for i in range(min_value + 1, max_value):
        if i not in arr:
            mid = i
            break
    return [min_value, mid, max_value]

print(minMinMax([-1, 4, 5, -23, 24]))
print(minMinMax([1, 3, -3, -2, 8, -1]))
print(minMinMax([2, -4, 8, -5, 9, 7]))
