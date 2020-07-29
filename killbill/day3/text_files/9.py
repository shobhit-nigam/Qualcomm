#readlines & writing
fa = open("one.txt", "r")
stra = fa.read()
fa.close()

listx = stra.splitlines()

for l in listx:
    print(l)


fb = open("two.txt", "w")
fb.write("good morning\n")
fb.write("great day")
fb.close()
