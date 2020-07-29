#
with open("registration.txt", "r") as fa:
    stra = fa.read()

listlines = stra.splitlines()

for line in listlines[:1]:
    temp = line.split()
    print(temp[-1])
