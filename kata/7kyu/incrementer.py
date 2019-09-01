'''
  codewars.com
  Problem: Incrementer
  01/09/2019
'''

def incrementer(nums):
    result = []
    for i in range(len(nums)):
        result.append((i + 1 + nums[i]) % 10)
    return result

def test():
    print(incrementer([]))
    print(incrementer([1, 2, 3]))
    print(incrementer([4, 6, 7, 1, 3]))
    print(incrementer([3, 6, 9, 8, 9]))
    print(incrementer([1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8]))

test()
