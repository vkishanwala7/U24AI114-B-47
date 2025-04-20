n = int(input("Enter a number to calculate its factorial: "))

while n > 20 or n < 0:
    n = int(input("Please enter a number between 0 and 20: "))

factorial = 1
for i in range(2, n+1, 1):
    factorial *= i

print(f"Factorial of {n} is {factorial}\n{n}! = {factorial}")
