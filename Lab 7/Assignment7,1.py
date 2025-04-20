class LinkedList:
    linked_list = []
    
    def __init__(self, *args):
        for arg in args:
            self.linked_list.append(int(arg))
        print("Linked List successfully created.\n")

    def display_linked_list(self):
        for data in self.linked_list:
            print(f"{data} ->", end=" ")
        print("NULL\n")
    
    def insert_node(self):
        if len(self.linked_list) != 0:    
            k = int(input("\nEnter the index where you want to insert a node: "))
            while(k < 0 or k > len(self.linked_list)):
                k = int(input(f"Please enter index between (0-{len(self.linked_list)}): "))
        else:
            k = 0
        self.linked_list.insert(k, int(input("Enter your data for new node: ")))
        print("Node successfully inserted!\n")

    def delete_node(self):
        if len(self.linked_list) != 0:    
            k = int(input("\nEnter which node you want to delete: "))
            while(k < 1 or k > len(self.linked_list)):
                k = int(input(f"Please delete between (1-{len(self.linked_list)}): "))
            self.linked_list.pop(k-1)
            print("Node successfully deleted!\n")
        else:
            print("You cannot delete elements from an empty list\n")

user_linked_list = LinkedList()
choice = -1
while choice != 0:
    print("1.Insert Node\n2.Delete Node\n3.Display Linked List\n0.Exit\n")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        user_linked_list.insert_node()
    elif choice == 2:
        user_linked_list.delete_node()
    elif choice == 3:
        user_linked_list.display_linked_list()
    elif choice == 0:
        print("Exiting the program...")
    else:
        print("Please enter a valid number\n")
exit(0)
