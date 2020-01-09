'''
  codewars.com
  Problem: Basic math (Add or Subtract)
  10/01/2020
'''

def calculate(s):
    s = s.replace('plus', '+')
    s = s.replace('minus', '-')
    return str(eval(s))


print(calculate('1plus2plus3plus4'))    # 10
print(calculate('1minus2minus3minus4')) # -8
print(calculate('1plus2plus3minus4'))   # 2
