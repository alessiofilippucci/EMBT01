# values = [1, "Ciao", True]

# print(type(values))
# print(type(values[0]))
# print(type(values[1]))
# print(type(values[2]))

# List = [
#     [
#         "A", 
#         "B"
#     ], 
#     "C",
#     [
#         "E", 
#         [
#             "F", 
#             [
#                 "G", 
#                 "H"
#             ]
#         ]
#     ]
# ]

# print(List[2][1][1][0])

# List = [1, 2, 3, 4, 5]

# List[4] = 15
# List.append(2)
# List.insert(0, 20)
# List.remove(2)

# itemRemoved = List.pop(0)

# print(List)
# print(itemRemoved)

# print(List[len(List) -1])
# print(List[-1])


list1 = []

list1.append(input("Inserisci nome"))
list1.append(input("Inserisci cognome"))
list1.append(input("Inserisci dob"))

out = "{0} {1}, {2}".format(*list1)

print(out)