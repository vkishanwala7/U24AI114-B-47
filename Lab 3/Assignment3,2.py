n = int(input("Enter how many numbers you want to check: "))
output = []

for i in range(n):
    fibo = [0,1]
    testcase = int(input(f"Enter testcase {i+1}: "))
    if testcase == 0:
        output.append("IsFibo")
    else:
        while (fibo[-1] < testcase):
            fibo.append(fibo[-1] + fibo[-2])
        if fibo[-1] == testcase:
            output.append("IsFibo")
        else:
            output.append("IsNotFibo")

print(output)
