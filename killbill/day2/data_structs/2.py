#tuple immutable
avengers = ("thor", "hulk", "captain", "ironman")
print(type(avengers))
print("avengers[0] =", avengers[0])
print("avengers[1:3] =", avengers[1:3])
# error
#avengers[2] = "Captain America"
avengers.append("black widow")
