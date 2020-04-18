'''
  codewars.com
  Problem: Difference of 2
  18/04/2020
'''

def twos_difference(arr):
    arr = sorted(arr)

    r = []
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[j] - arr[i] == 2:
                r.append((arr[i], arr[j]))
    return r

if __name__ == '__main__':
    print(twos_difference([1, 2, 3, 4]))
    print(twos_difference([1, 3, 4, 6]))
    print(twos_difference([0, 3, 1, 4]))
    print(twos_difference([4, 1, 2, 3]))
    print(twos_difference([6, 3, 4, 1, 5]))
    print(twos_difference([3, 1, 6, 4]))
    print(twos_difference([1, 3, 5, 6, 8, 10, 15, 32, 12, 14, 56]))
    print(twos_difference([1, 4, 7, 10]))
    print(twos_difference([]))
