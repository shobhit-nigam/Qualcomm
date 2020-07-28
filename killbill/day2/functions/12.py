ga = 10

print("outside ga =", ga)

def funca():
    global ga
    ga = ga + 1
    print("inside ga =", ga)

funca()
print("outside ga =", ga)
