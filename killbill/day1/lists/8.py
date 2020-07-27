#lists functions

tintin = ['tintin', 'haddock', 'calculus', 'snowy', 'marie-louis']
print("tintin =", tintin)
tintin.clear()
print("tintin =", tintin)

num_a = [5, 7, 9, 3]
num_b = [3, 4, 9]
num_c = [5, 7, 9, 3]
num_d = [3, 4, 9]
print("num_a =", num_a)
print("num_c =", num_c)
num_a.append(num_b)
num_c.extend(num_d)
print("num_a =", num_a)
print("num_c =", num_c)


