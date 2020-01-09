'''
  codewars.com
  Problem: Basic math (Add or Subtract)
  10/01/2020
'''

def calculate(s):
    temp = ''
    for c in s:
        if c == 'p' or c == 'm':
            temp += ' ' + c
        elif c == 's':
            temp += c + ' '
        else:
            temp += c
    l = temp.split()

    nums = [int(n) for n in l if n.isdigit()]
    opes = [o for o in l if o.isdigit() == False]

    n = nums[0]
    n_i = 1
    o_i = 0
    while (n_i < len(nums)):
        if opes[o_i] == 'plus':
            n += nums[n_i]
        else:
            n -= nums[n_i]
        n_i += 1
        o_i += 1
    return str(n)


print(calculate('1plus2plus3plus4'))    # 10
print(calculate('1minus2minus3minus4')) # -8
print(calculate('1plus2plus3minus4'))   # 2
