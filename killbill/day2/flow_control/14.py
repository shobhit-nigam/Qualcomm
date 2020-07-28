#multi-for and break

latino = {"chile":"santiago", "peru":"lima", "venezuela":"caracas",
          "colombia":"bogota", "brazil":"brasillia"}

for k in latino.keys():
    if k == "colombia":
        print(latino[k])
        break

print("------")

for i in range(0, 3):
    for j in range(0, 3):
        if i==j:
            print("break")
            break;
        else:
            print("no break")

'''
{
("nitk", "vlsi"):["dcdz",  ]
("bitsg", "powerele"):[ ,]


}
'''


