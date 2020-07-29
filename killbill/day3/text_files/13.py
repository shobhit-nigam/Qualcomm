#
with open("registration.txt", "r") as fa:
    stra = fa.read()

listlines = stra.splitlines()

email_id = []

for line in listlines:
    temp = line.split()
    email_id.append(temp[-1])

print(email_id)
