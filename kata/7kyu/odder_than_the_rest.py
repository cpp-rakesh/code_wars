'''
  codewars.com
  Problem: Odder than the rest
  27/09/2019
'''

def odd_one(arr):
    for i in range(len(arr)):
        if arr[i] & 1 == 1:
            return i
    return -1

print(odd_one([2,4,6,7,10]))
print(odd_one([2,16,98,10,13,78]))
print(odd_one([4,-8,98,-12,-7,90,100]))
print(odd_one([2,4,6,8]))
