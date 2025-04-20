names = []
reversed_names = []

for i in range(1,11):
    name = str(input(f"Enter name {i}: "))
    while (len(name) > 15):
        name = str(input(f"Enter a name with less than 15 characters: "))
    names.append(name)

reversed_names = [name[::-1] for name in names]

print("All Names Reversed:")
print(reversed_names)
