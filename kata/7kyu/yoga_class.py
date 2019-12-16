'''
  codewars.com
  Problem: Yoga class
  17/12/2019
'''

def count(classroom, s, pose):
    counter = 0
    for i in range(len(classroom)):
        for c in classroom[i]:
            if s[i] + c >= pose:
                counter += 1
    return counter

def yoga(classroom, poses):
    s = []
    for r in classroom:
        v = 0
        for c in r:
            v += c
        s.append(v)

    t = 0
    for p in poses:
        t += count(classroom, s, p)

    return t

print(yoga([ [3,2,1,3],
             [1,3,2,1],
             [1,1,1,2]],
           [1,7,5,9,10,21,4,3]))
