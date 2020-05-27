'''
  codewars.com
  Problem: Get planet name by ID
  28/05/2020
'''

def get_planet_name(id):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    return planets[id - 1]

if __name__ == '__main__':
    print(get_planet_name(2))
    print(get_planet_name(5))
    print(get_planet_name(3))
    print(get_planet_name(4))
    print(get_planet_name(8))
    print(get_planet_name(1))
