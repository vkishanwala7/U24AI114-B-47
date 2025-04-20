output = []
n = int(input("Enter number of test cases: "))
for i in range(n):
    digits = []
    count = 0
    testcase = int(input(f"Enter test case {i+1}: "))
    digits = [int(digit) for digit in str(testcase)]
    for number in digits:
        if testcase % number == 0:
            count += 1
    output.append(count)
print(output)
