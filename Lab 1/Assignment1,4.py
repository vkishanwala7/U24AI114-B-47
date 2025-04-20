numbers = list(range(1, 10001))

equivalence_classes = {0: [], 1: [], 2: [], 3: [], 4: []}

for num in numbers:
    remainder = num % 5
    equivalence_classes[remainder].append(num)

all_numbers_in_classes = sum(equivalence_classes.values(), [])

is_valid = set(all_numbers_in_classes) == set(numbers)

print("Equivalence classes based on modulo 5:")
for remainder, class_list in equivalence_classes.items():
    print(f"Class for remainder {remainder}: {class_list[:10]}...")

if is_valid:
    print("\nThe equivalence classes are valid. The union of all equivalence classes is the original set.")
else:
    print("\nThe equivalence classes are not valid.")
