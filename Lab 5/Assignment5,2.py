k = int(input("Enter the value of k: "))
if(k%2 != 0):
    k = ((k+1)*(k-1)) // 4
else:
    k = (k**2 // 4)
print(f"Maximum pieces: {k}")
