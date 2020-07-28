def funca(x, y):
    print("x =", x)
    print("y =", y)
    print("----")
    return list(x.keys()), "hi", [7, 8, 9, 10]

a, b, c = funca({1:"hey", 2:"hello"}, 200)

print("a =", a)
print("b =", b)
print("c =", c)

#error
#a, b = funca(100, 200)
