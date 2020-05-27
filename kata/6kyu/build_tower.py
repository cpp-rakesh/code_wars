'''
  codewars.com
  Problem: build tower
  28/05/2020
'''

def tower_builder(n):
    tower = []
    for i in range(n):
        level = ''
        # print pre spaces
        for j in range(n - i - 1):
            level += ' '
        for j in range((i << 1) + 1):
            level += '*'
        # print post spaces
        for j in range(n - i - 1):
            level += ' '
        tower.append(level)
    return tower

if __name__ == '__main__':
    print(tower_builder(2))
    print(tower_builder(3))
