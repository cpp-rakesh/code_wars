'''
codewars.com
Problem: Check the exam
Date: 13/02/2020
'''

def check_exam(a1, a2):
    marks = 0
    for i in range(len(a1)):
        if a1[i] == a2[i]:
            marks += 4
        elif len(a2[i]) > 0:
            marks -= 1
    return max(0, marks)

if __name__ == "__main__":
    print(check_exam(["a", "a", "b", "b"], ["a", "c", "b", "d"]))
    print(check_exam(["a", "a", "c", "b"], ["a", "a", "b",  ""]))
    print(check_exam(["a", "a", "b", "c"], ["a", "a", "b", "c"]))

