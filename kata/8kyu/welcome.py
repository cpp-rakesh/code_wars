'''
codewars.com
Problem: Welcome!
Date: 30/04/2019
'''

d = { 'english': 'Welcome',
      'czech': 'Vitejte',
      'danish': 'Velkomst',
      'dutch': 'Welkom',
      'estonian': 'Tere tulemast',
      'finnish': 'Tervetuloa',
      'flemish': 'Welgekomen',
      'french': 'Bienvenue',
      'german': 'Willkommen',
      'irish': 'Failte',
      'italian': 'Benvenuto',
      'latvian': 'Gaidits',
      'lithuanian': 'Laukiamas',
      'polish': 'Witamy',
      'spanish': 'Bienvenido',
      'swedish': 'Valkommen',
      'welsh': 'Croeso' }

def greet(l):
        if l in d.keys():
                return d[l]
        else:
                return d['english']

print(greet('english'))
print(greet('french'))
