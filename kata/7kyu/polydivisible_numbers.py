'''
  codewars.com
  Problem: Polydivisible numbers
  03/03/2020
'''

def polydivisible(x):
    n = len(str(x))
    while (n > 0):
        if x % n != 0:
            return False
        x = int(x / 10)
        n -= 1
    return True

print(polydivisible(1232))
print(polydivisible(123220))
print(polydivisible(0))
print(polydivisible(1))
print(polydivisible(141))
print(polydivisible(1234))
print(polydivisible(21234))
print(polydivisible(81352))
print(polydivisible(987654))
print(polydivisible(1020005))
print(polydivisible(9876545))
print(polydivisible(381654729))
print(polydivisible(1073741823))
