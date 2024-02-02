myTuple = ('Item1', 'Item2')

print(myTuple[0])

list = list(myTuple)

list[0] = "Item100"

myTuple = tuple(list)

print(myTuple[0])