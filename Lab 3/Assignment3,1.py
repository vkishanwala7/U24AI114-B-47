def DigitalRoot(number):
    while(number % 10 != number):
        digits = [int(digit) for digit in str(number)]
        number = 0
        for digit in digits:
            number += digit
    
    return number

number = str(input("Enter a number: "))
digitalroot = DigitalRoot(number)
print(f"Digital Root of {number} is {digitalroot}")
