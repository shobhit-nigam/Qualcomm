#JSON read
import json

with open("example_1.json", "r") as fa:
    data = json.load(fa)

print(data)
