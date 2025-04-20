productandprice = {}
a = -1
while a != 0:
    print("Add a product and its price -> 1")
    print("Search a product name and display its price -> 2")
    print("Exit -> 0\n")
    a = int(input("What to you want to do: "))
    if a == 1:
        product , price = input("Enter Product Name and Price seperated by a space: ").split()
        product = str(product)
        price = float(price)
        productandprice[product] = price
        print("Product Successfully Added\nUpdated List:")
        print(productandprice)
        print()
    elif a == 2:
        search = str(input("\nEnter the Product you want to search (Case Sensitive): "))
        found = False
        for product , price in productandprice.items():
            if product == search:
                print(f"Price of {product} is {price}\n")
                found = True
                break
        
        if not found:
            print(f"Sorry {search} not found. Please Try Again!\n")
        
    elif a == 0:
        print("Exiting The Program...")
    
    else:
        print("Please enter a valid number and try again!\n")
