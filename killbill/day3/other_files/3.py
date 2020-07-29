#json write
import json

dictx = {1:"one", 2:"two", 3:"three"}

with open("example_3.json", "w") as fa:
    json.dump(dictx, fa)

