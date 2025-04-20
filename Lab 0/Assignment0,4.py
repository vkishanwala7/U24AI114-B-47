a = float(input("Enter variable 1: "))
b = float(input("Enter variable 2: "))

print(f"Values before changing:\nVariable 1 = {a}  Variable 2 = {b}")

a,b = b,a

print(f"Values after changing:\nVariable 1 = {a}  Variable 2 = {b}")
