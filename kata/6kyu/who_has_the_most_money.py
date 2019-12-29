'''
  codewars.com
  Problem: Who has the most money
  30/12/2019
'''

class Student:
    def __init__(self, name, fives, tens, twenties):
        self.name = name
        self.fives = fives
        self.tens = tens
        self.twenties = twenties

money = lambda student: (5 * student.fives) + (10 * student.tens) + (20 * student.twenties)

Student.__eq__ = lambda lhs, rhs: money(lhs) == money(rhs)
Student.__lt__ = lambda lhs, rhs: money(lhs) < money(rhs)
Student.__gt__ = lambda lhs, rhs: money(lhs) > money(rhs)

def most_money(students):
    if len(students) == 1:
        return students[0].name
    elif max(students) != min(students):
        return max(students).name
    return 'all'

def test():
    phil = Student("Phil", 2, 2, 1)
    cam = Student("Cameron", 2, 2, 0)
    geoff = Student("Geoff", 0, 3, 0)

    students = [phil, cam, geoff]
    print(most_money(students))

test()
