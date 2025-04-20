n = int(input("Enter number of testcases: "))
output = []
for i in range(n):
    string = str(input(f"Enter a string for testcase {i+1}: "))
    character = list(char for char in string)
    count = 0
    for i in range(len(character) // 2):
        if(character[i] != character[len(character) - i - 1]):
            count += ord(character[len(character) - i - 1]) - ord(character[i])
    output.append(count)
print(output)
