#
with open("registration.txt", "r") as fa:
    stra = fa.read()

listlines = stra.splitlines()

email_id = []
email_dict = {}

for line in listlines:
    temp = line.split()
    email = temp[-1]
    domain = email.split('@')
    if domain[1] in email_dict:
        email_dict[domain[1]].append(domain[0])
    else:
        email_dict[domain[1]] = [domain[0]]


for k in email_dict:
    print(k , "has", len(email_dict[k]), "registrations as follows:")
    print(email_dict[k])
    print("-------")
