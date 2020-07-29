#reading
fa = open("one.txt", "r")
stra = fa.read()
print("length =", len(stra))
#reading from the end
stra = fa.read()
print("length =", len(stra))
fa.close()
