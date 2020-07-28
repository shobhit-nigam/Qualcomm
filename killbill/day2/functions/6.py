def funca(x, y, z):
    print("x =", x)
    print("y =", y)
    print("z =", z)
    #  by default returns None

a = funca(10, 20, 30)
print("a =", a)

#error
a = funca(10, 20)
print("a =", a)

#error
a = funca(10, 20, 30, 40)
print("a =", a)

