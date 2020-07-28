# for dict

latino = {"chile":"santiago", "peru":"lima", "venezuela":"caracas",
          "colombia":"bogota", "brazil":"brasillia"}

for k in latino.keys():
    print("key =", k)

print("------")

for v in latino.values():
    print("vals =", v)

print("------")

for k, v in latino.items():
    print(k, ":\t", v)

