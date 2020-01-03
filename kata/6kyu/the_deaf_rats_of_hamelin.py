'''
  codewars.com
  Problem: The deaf rats of hamelin
  04/01/2020
'''

def count_deaf_rats(town):
    deafs = 0
    pos = town.find('P')
    # first let's go for all the left mouse from Piper
    i = pos - 1
    while i >= 0:
        if town[i] == 'O':
            i -= 2
        elif town[i] == '~':
            deafs += 1
            i -= 2
        else:
            i -= 1

    # now find all the right nouse from Piper
    i = pos + 1
    while i < len(town):
        if town[i] == 'O':
            i += 2
        elif town[i] == '~':
            deafs += 1
            i += 2
        else:
            i += 1
    return deafs;

print(count_deaf_rats('~O~O~O~O P'))
print(count_deaf_rats('P O~ O~ ~O O~'))
print(count_deaf_rats('~O~O~O~OP~O~OO~'))
