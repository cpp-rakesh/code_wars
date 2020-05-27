'''
  codewars.com
  Problem: multiplication table
  28/05/2020
'''

def multiplication_table(size):
    table = []
    for r in range(1, size + 1):
        row = []
        for c in range(1, size + 1):
            row.append(r * c)
        table.append(row)
    return table

if __name__ == '__main__':
    print(multiplication_table(3))
