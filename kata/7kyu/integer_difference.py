'''
  codewars.com
  Problem: Integer difference
  18/04/2020
'''

def int_diff(arr, n):
    r = 0
    arr = sorted(arr)
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[j] - arr[i] == n:
                r += 1
    return r

if __name__ == '__main__':
    print(int_diff([1, 1, 5, 6, 9, 16, 27], 4))
    print(int_diff([1, 1, 3, 3], 2))
