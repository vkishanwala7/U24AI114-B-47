import pandas as pd

s = pd.Series(['X', 'Y', 'T', 'Aaba', 'Baca', 'CABA', None, 'bird', 'horse', 'dog'])

upper_case = s.str.upper()
print("Uppercase values:")
print(upper_case)

lower_case = s.str.lower()
print("\nLowercase values:")
print(lower_case)

string_length = s.str.len()
print("\nLength of each string:")
print(string_length)