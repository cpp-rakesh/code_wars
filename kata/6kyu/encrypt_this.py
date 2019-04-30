def encrypt_this(t):
    r = []
    for w in t.split():
        a = str(ord(w[0]))
        if len(w) > 2:
            a = a + w[-1]
            a = a + w[2:len(w) - 1]
            a = a + w[1]
        elif len(w) == 2:
            a = a + w[1]
        r.append(a)
    return ' '.join(r)

print(encrypt_this('A wise old owl lived in an oak'))
print(encrypt_this('The more he saw the less he spoke'))
