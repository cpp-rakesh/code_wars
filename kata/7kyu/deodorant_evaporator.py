'''
  codewars.com
  Problem: Deodorant evaporator
  27/09/2019
'''

def evaporator(content, evap_per_day, threshold):
    d = 0
    p = 100
    while p > threshold:
        p = p - (p * evap_per_day * 0.01)
        d += 1
    return d

print(evaporator(10, 10, 10))
