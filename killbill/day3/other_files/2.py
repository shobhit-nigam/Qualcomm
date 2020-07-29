#JSON read complex
import json

with open("example_2.json", "r") as fa:
    data = json.load(fa)


for k, v in data.items():
    print(v)
    print("----")

# recursion 
