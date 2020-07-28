#dictionary

avengers = {'thor':'hammer', 'ironman':'suit', 'captain':'shield'}


print(type(avengers))
print("avengers =", avengers)
print("avengers['thor'] =", avengers['thor'])

avengers['captain'] = ['shield', 'hammer']
print("avengers =", avengers)
print(avengers['captain'][1][2])

avengers['wanda'] = 'magic'

print("avengers =", avengers)

dc = ['wonderwoman', 'batman', 'aquaman', 'flash']

superheroes = {'india':'shaktiman', 'dc':dc, 'marvel':avengers}

