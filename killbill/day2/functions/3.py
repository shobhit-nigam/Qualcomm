def funca(x, y):
    print("x =", x)
    print("y =", y)
    print("----")
    return x+2, y+3, x+y

a, b, c = funca(100, 200)

print("a =", a)
print("b =", b)
print("c =", c)

#error
a, b = funca(100, 200)
