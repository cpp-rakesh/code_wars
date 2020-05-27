'''
  codewars.com
  Problem: last digits of a number
  28/05/2020
'''

def solution(n, d):
    n = str(n)
    if d <= 0:
        return []
    if d > len(n):
        d = len(n);

    n = n[d * -1:]
    return [int(e) for e in n]

if __name__ == '__main__':
    print(solution(1, 1))
    print(solution(123767, 4))
    print(solution(0, 1))
    print(solution(34625647867585, 10))
    print(solution(1234, 0))
    print(solution(24134, -4))
    print(solution(1343, 5))
