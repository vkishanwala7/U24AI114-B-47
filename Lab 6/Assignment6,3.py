class Converter:
    
    def __init__(self, length = 0, unit = ""):
        self.length = length
        self.unit = unit
        self.convert_to_inch()

    conversion_factors_from_inches = {
        "inches": 1,
        "feet": 12,
        "yards": 36,
        "miles": 63360,
        "millimeters": 0.0393701,
        "centimeters": 0.393701,
        "meters": 39.3701,
        "kilometers": 39370.1,
    }

    def convert_to_inch(self):
        if self.unit in self.conversion_factors_from_inches:
            self.length *= self.conversion_factors_from_inches[self.unit]
            self.unit = "inches"

    def inches(self):
        return self.length / self.conversion_factors_from_inches["inches"]

    def feet(self):
        return self.length / self.conversion_factors_from_inches["feet"]

    def yards(self):
        return self.length / self.conversion_factors_from_inches["yards"]

    def miles(self):
        return self.length / self.conversion_factors_from_inches["miles"]

    def millimeters(self):
        return self.length / self.conversion_factors_from_inches["millimeters"]

    def centimeters(self):
        return self.length / self.conversion_factors_from_inches["centimeters"]

    def meters(self):
        return self.length / self.conversion_factors_from_inches["meters"]

    def kilometers(self):
        return self.length / self.conversion_factors_from_inches["kilometers"]


units = [{"inches": 1}, {"feet": 2}, {"yards": 3}, {"miles": 4}, {"millimeters": 5}, {"centimeters": 6}, {"meters": 7}, {"kilometers": 8}]
print("Available units:")
for unit in units:
    print(unit)

unit_choice = int(input("Enter which number unit you want to enter: "))
while unit_choice > 8 or unit_choice < 1:
    unit_choice = int(input("Please enter a number between (1-8): "))
unit = list(units[unit_choice - 1].keys())[0]
length = float(input(f"Enter length in {unit}: "))
length_and_unit = Converter(length, unit)

choice = -1
while choice != 0:
    print("\n0. Exit")
    print("1. Convert to inches")
    print("2. Convert to feet")
    print("3. Convert to yards")
    print("4. Convert to miles")
    print("5. Convert to millimeters")
    print("6. Convert to centimeters")
    print("7. Convert to meters")
    print("8. Convert to kilometers")
    print("9. Change your input length and unit\n")

    choice = int(input("Enter the choice you want to convert your unit into: "))
    
    if choice == 0:
        print("Exiting the program...")
        break
    
    elif choice == 1:
        print(f"\nYour length in inches is {length_and_unit.inches():.3f} inches.\n")
    elif choice == 2:
        print(f"\nYour length in feet is {length_and_unit.feet():.3f} feet.\n")
    elif choice == 3:
        print(f"\nYour length in yards is {length_and_unit.yards():.3f} yards.\n")
    elif choice == 4:
        print(f"\nYour length in miles is {length_and_unit.miles():.3f} miles.\n")
    elif choice == 5:
        print(f"\nYour length in millimeters is {length_and_unit.millimeters():.3f} mm.\n")
    elif choice == 6:
        print(f"\nYour length in centimeters is {length_and_unit.centimeters():.3f} cm.\n")
    elif choice == 7:
        print(f"\nYour length in meters is {length_and_unit.meters():.3f} meters.\n")
    elif choice == 8:
        print(f"\nYour length in kilometers is {length_and_unit.kilometers():.3f} km.\n")
    
    elif choice == 9:
        print("\nChange your unit and length:")
        for unit in units:
            print(unit)
        unit_choice = int(input("Enter which number unit you want to enter: "))
        while unit_choice > 8 or unit_choice < 1:
            unit_choice = int(input("Please enter a number between (1-8): "))
        unit = list(units[unit_choice - 1].keys())[0]
        length = float(input(f"Enter length in {unit}: "))
        length_and_unit = Converter(length, unit)
    else:
        print("\nEnter a valid choice.\n")
exit(0)