#sets

seta = {'apples', 'oranges', 'apricots', 'apples', 'bananas', 'oranges'}
setb = {'plums', 'apples', 'bananas', 'kiwis'}

print(type(seta))
print("seta =", seta)
print("setb =", setb)

#no error
setc = {'plums', 'apples', 'bananas', 'kiwis', ('avocados', 'tomatoes')}
print("setc =", setc)

#error
setc = {'plums', 'apples', 'bananas', 'kiwis', ['avocados', 'tomatoes']}
print("setc =", setc)
