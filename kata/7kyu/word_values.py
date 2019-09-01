'''
  codewars.com
  Problem: Word values
  01/09/2019
'''

def name_value(my_list):
    result = []
    for i in range(len(my_list)):
        value = 0
        for c in my_list[i]:
            if c >= 'a' and c <= 'z':
                value += ord(c) - ord('a') + 1
        result.append(value * (i + 1))
    return result

def test():
    print(name_value(["abc","abc","abc","abc"]))
    print(name_value(["codewars","abc","xyz"]))

test()
