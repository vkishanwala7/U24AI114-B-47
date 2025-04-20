output = []
n = int(input("Enter number of testcases you want to enter: "))

for i in range(1 , n+1):
    testcase = int(input(f"Enter the number of cycles for testcase {i}: "))
    height = 1
    for cycle in range(1 , testcase+1):
        if cycle % 2 != 0:
            height *= 2
        else:
            height += 1
    output.append(height)

print(output)
