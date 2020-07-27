#lists references & nesting

tintin = ['tintin', 'haddock', 'calculus', 'snowy', 'marie-louis']
listx = [45, 78, tintin]

print("tintin =", tintin)
print("listx =", listx)

tintin.remove("snowy")

print("tintin =", tintin)
print("listx =", listx)

#operation on int
listx[0] += 5
print("listx =", listx)

# operation on list
listx[2].append()

#function for string
listx[2][1].capitalize()
