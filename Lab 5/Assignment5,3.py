def nextLexicographicalString(string):
    string = list(string)
    i = len(string) - 2
    while i >= 0 and string[i] >= string[i + 1]:
        i -= 1
    
    if i == -1:
        return "No Answer"
    
    j = len(string) - 1
    while string[j] <= string[i]:
        j -= 1
    
    string[i], string[j] = string[j], string[i]
    string = string[:i + 1] + string[i + 1:][::-1]
    return ''.join(string)

n = int(input("Enter number of testcases: "))
output = []
for i in range(n):
    string = input(f"Enter String {i+1}: ")
    output.append(nextLexicographicalString(string))
print(output)
