#lists mutable

living = ["bat", "cat", "dog", "eat"]
num = [5, 7, 9, 10, 11, 13, 19]

print(type(living))

print(type(num))

print("living=",living)
print("living[0]=", living[0])
living[0] = "owl"
print("living[0]=", living[0])
print("living=",living)
print("living[0][1]=", living[0][1])
#error
living[0][1] = 'u'
