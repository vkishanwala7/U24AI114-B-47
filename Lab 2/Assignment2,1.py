word = str(input("Enter any word: "))
result = ""
for i in range(len(word)):
    if i % 2 == 0:
        result += word[i].lower()
    else:
        result += word[i].upper()

print(f"{word} after capitalizing every other letter is {result}")
