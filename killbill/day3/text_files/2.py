#reading
fa = open("one.txt", "r")
stra = fa.read(4)
print(stra)
stra = fa.read(6)
print(stra)

fa.close()
