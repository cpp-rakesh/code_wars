'''
  codewars.com
  Problem: Split and then add both sides of an array together
  17/05/2020
'''

def split_and_add(numbers, n):
    if len(numbers) <= 1 or n <= 0:
        return numbers
    else:
        return split_and_add(magic(numbers), n - 1)

def magic(n):
    m = len(n) >> 1
    a = n[:m]
    b = n[m:]
    if len(n) & 1 == 1:
        a.insert(0, 0)

    n = []
    for i in range(len(a)):
        n.append(a[i] + b[i])
    return n

if __name__ == '__main__':
    print(split_and_add([1,2,3,4,5], 2))
    print(split_and_add([1,2,3,4,5], 3))
    print(split_and_add([15], 3))
    print(split_and_add([32,45,43,23,54,23,54,34], 2))
    print(split_and_add([32,45,43,23,54,23,54,34], 0))
    print(split_and_add([3,234,25,345,45,34,234,235,345], 3))
    print(split_and_add([3,234,25,345,45,34,234,235,345,34,534,45,645,645,645,4656,45,3], 4))
    print(split_and_add([23,345,345,345,34536,567,568,6,34536,54,7546,456], 20))
