'''
  codewars.com
  Problem: Ordered count of charachters
  09/05/2019
'''

def ordered_count(i):
    d = {}
    for c in i:
        if c in d:
            d[c] = d[c] + 1
        else:
            d[c] = 1

    return [(k, v) for k, v in d.items()]

print(ordered_count('abracadabra'))
print(ordered_count('Code Wars'))
