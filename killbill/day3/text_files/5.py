#seek & tell
fa = open("one.txt", "r")
stra = fa.read(8)
print(stra)

stra = fa.read(30)
print(stra)

stra = fa.read(20)
print(stra)

print(fa.tell())

fa.seek(7)
stra = fa.read(8)
print(stra)
print(fa.tell())
fa.close()

