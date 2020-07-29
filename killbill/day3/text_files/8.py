#readlines
fa = open("one.txt", "r")
stra = fa.read()
fa.close()

listx = stra.splitlines()

for l in listx:
    print(l)


