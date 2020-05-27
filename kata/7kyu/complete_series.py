'''
  codewars.com
  Problem: Complete series
  28/05/2020
'''

def duplicate_test(seq):
    for i in range(1, len(seq)):
        if seq[i - 1] == seq[i]:
            return False
    return True

def complete_series(seq):
    seq = sorted(seq)
    if duplicate_test(seq) == True:
        return [i for i in range(seq[len(seq) - 1] + 1)]
    return [0]

if __name__ == '__main__':
    print(complete_series([0,1]))
    print(complete_series([1,4,6]))
    print(complete_series([3,4,5]))
    print(complete_series([2,1]))
    print(complete_series([1,4,4,6]))

