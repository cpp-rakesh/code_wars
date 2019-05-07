'''
codewars.com
Problem: Reverse list order
Date: 07/05/2019
'''

def reverse_list(l):
    m = int(len(l) / 2)
    j = len(l) - 1
    for i in range(m):
        l[i], l[j] = l[j], l[i]
        j = j - 1
    return l


print(reverse_list([1,2,3,4]))
print(reverse_list([3,1,5,4]))
