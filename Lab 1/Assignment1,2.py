import random
mylist = []
count = 0
maxzeroes = 0
for i in range(1,101):    
    random_num = random.randint(0,1)
    mylist.append(random_num)
    if (random_num == 0):
        count += 1
    else:
        if (maxzeroes < count):
            maxzeroes = count
        count = 0
print(mylist)
print(f"Longest Run of Zeroes is: {maxzeroes}")
