ga = 10

print("outside ga =", ga)

def funca():
    ga = 11
    #local ga
    print("inside ga =", ga)

funca()
print("outside ga =", ga)
