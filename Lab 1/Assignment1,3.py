inch = 12
yard = 1/3
millimeter = 304.8
centimeter = 30.48
meter = 1000/3281
kilometer = 1/3281

convert = [inch, yard, millimeter, centimeter, meter, kilometer]
convertions =["Inch", "Yard", "Millimeter", "Centimeter", "Meter", "Kilometer"]
feet = float(input("Enter length in feet: "))
print(convertions)
convertion = int(input("Enter the convertion number: "))
print(f"The length in {convertions[convertion-1]} is {(feet * convert[convertion-1]):.3f}")
