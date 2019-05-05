'''
  codewars.com
  Problem: How much will you spend?
  06/05/2019
'''

def getTotal(costs, items, tax):
    t = 0
    for i in items:
        if i in costs.keys():
            t = t + costs[i]
    return round(t + (t * tax), 2)

print(getTotal({'socks':5, 'shoes':60, 'sweater':30}, ['socks', 'shoes'], 0.09))

