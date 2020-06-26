'''
  codewars.com
  Problem: Reverse the bits in an integer
  27/06/2020
'''

def reverse_bits(n):
    d = []
    while n:
        d.append(n & 1)
        n = n >> 1
    n = 0
    m = len(d) - 1
    for i in range(m, -1, -1):
        if d[i] == 1:
            n += (1 << m - i)
    return n


if __name__ == "__main__":
    print(reverse_bits(6))
    print(reverse_bits(417))
    print(reverse_bits(267))
    print(reverse_bits(0))
    print(reverse_bits(2017))
    print(reverse_bits(1023))
    print(reverse_bits(1024))
