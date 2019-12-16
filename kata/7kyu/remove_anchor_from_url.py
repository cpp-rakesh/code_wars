'''
  codewars.com
  Problem: Remove anchor from url
  17/12/2019
'''

def remove_url_anchor(url):
    p = url.find('#')
    if p == -1:
        return url
    else:
        return url[:p]

print(remove_url_anchor("www.codewars.com#about"))
print(remove_url_anchor("www.codewars.com/katas/?page=1#about"))
print(remove_url_anchor("www.codewars.com/katas/"))
