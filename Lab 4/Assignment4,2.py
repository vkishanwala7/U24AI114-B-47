n = int(input("Enter number of testcases: "))
output = []
for i in range(n):
    count = 0
    a,b = input(f"Enter testcase {i+1} with a space between them: ").split()
    a = int(a)
    b = int(b)
    for j in range(a,b+1):
        if j**(1/2) == int(j**(1/2)):
            count += 1
    output.append(count)
print(output)
