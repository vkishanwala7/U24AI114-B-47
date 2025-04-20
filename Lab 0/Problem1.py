dhoni = int(input("Enter number of runs scored by Dhoni in Test 1: "))
dhoni += int(input("Enter number of runs scored by Dhoni in Test 2: "))

kohli = int(input("Enter number of runs scored by Kohli in Test 1: "))
kohli += int(input("Enter number of runs scored by Kohli in Test 2: "))

sachin = int(input("Enter number of runs scored by Sachin in Test 1: "))
sachin += int(input("Enter number of runs scored by Sachin in Test 2: "))

print(f"\nDhoni total runs: {dhoni}\nKohli total runs: {kohli}\nSachin total runs: {sachin}\n")

if dhoni > kohli and dhoni > sachin:
    print(f"Orange Cap Winner: Dhoni\nRuns: {dhoni}")
elif kohli > dhoni and kohli > sachin:
    print(f"Orange Cap Winner: Kohli\nRuns: {kohli}")
elif sachin > dhoni and sachin > kohli:
    print(f"Orange Cap Winner: Sachin\nRuns: {sachin}")
elif kohli == dhoni and dhoni != sachin:
    print(f"Tie Between Dhoni and Kohli\nTheir runs: {dhoni}")
elif sachin == dhoni and dhoni != kohli:
    print(f"Tie Between Dhoni and Sachin\nTheir runs: {dhoni}")
elif kohli == sachin and dhoni != kohli:
    print(f"Tie Between Virat and Sachin\nTheir runs: {kohli}")
else:
    print(f"All Players scored equal runs\nTheir runs: {dhoni}")
