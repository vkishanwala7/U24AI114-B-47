list1 = [num for num in range(0,50)]
print("\nList 1:")
print(list1)

list2 = [num**2 for num in range(51)]
print("\nList 2:")
print(list2)

list3 = [str(chr(i))*(i - 96) for i in range(97,123)]
print("\nList 3:")
print(list3)
