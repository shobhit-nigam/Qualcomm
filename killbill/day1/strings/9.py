#strings functions & immutable

game = "cricket"
player = "virat kohli"
reptile = 'cobra'

print(game.upper())
print(player.capitalize())
print(player.title())

#error:
#player[0] = 'V'

#not an error
player = "mahi"
print(player.capitalize())

player = "virat kohli"
player.replace("virat", "kunal")
print(player)
player = player.replace("virat", "kunal")
print(player)


