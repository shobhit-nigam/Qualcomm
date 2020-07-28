lista = [12, 34, 55, 66, 100, 20]

x = int(input())

if x in lista:
    print("found")
else:
    print("not found")


def fun(x , y ,z =123):
    print("x---",x)
    print("y---",y)
    print("z---",z) 
    #return 2
    
if(fun(2,3) == None):
    print("None")
