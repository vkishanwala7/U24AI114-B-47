n1 = int(input("Enter number 1: "))
n2 = int(input("Enter number 2: "))
max = -1
for i in range(n1, n2+1):
    for j in range(i, n2+1):
        if(i ^ j > max):
            max = i ^ j
print(f"Maximum XOR: {max}")
