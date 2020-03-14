'''
codewars.com
Problem: Triple trouble
Date: 15/03/2020
'''

def triple_trouble(one, two, three):
    r = ''
    for i in range(len(one)):
        r += one[i] + two[i] + three[i]
    return r

print(triple_trouble("aaa","bbb","ccc"))
print(triple_trouble("aaaaaa","bbbbbb","cccccc"))
print(triple_trouble("burn", "reds", "roll"))
print(triple_trouble("Bm", "aa", "tn"))
print(triple_trouble("LLh", "euo", "xtr"))
