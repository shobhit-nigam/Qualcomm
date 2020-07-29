#readlines & writing
fa = open("one.txt", "r")
stra = fa.read()
fa.close()

listx = stra.splitlines()
fb = open("three.txt", "w")

for l in listx[::2]:
    fb.write(l)

fb.close()
