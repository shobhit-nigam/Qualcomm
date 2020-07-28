varx = 300
vary = 40
varz = 100

varx = int(input())
if varx < vary:
    if varx < varz:
        print("x is smalles")
    else:
        print("z is smallest")
else:
    if vary < varz:
        print("y is smalles")
    else:
        print("z is smallest")    

print("last line")
    
