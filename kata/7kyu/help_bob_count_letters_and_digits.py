'''
  codewars.com
  Problem: Help bob count letters and digits
  03/02/2020
'''

def count_letters_and_digits(s):
    n = 0
    for c in s:
        if (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'):
            n += 1
    return n


print(count_letters_and_digits('n!!ice!!123'))
print(count_letters_and_digits('de?=?=tttes!!t'))
print(count_letters_and_digits(''))
print(count_letters_and_digits('!@#$%^&`~.'))
print(count_letters_and_digits('u_n_d_e_r__S_C_O_R_E'))
