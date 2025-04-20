class Queue:
    queue = []
    def __init__(self, *args):
        for arg in args:
            self.queue.append(int(arg))
        print("Queue successfully created\n")

    def enqueue(self):
        self.queue.append(int(input("Enter you data: ")))
        print("\nData Enqueued!\n")

    def dequeue(self):
        if len(self.queue) != 0:    
            self.queue.pop(0)
            print("\nData Dequeued!\n")
        else:
            print("\nUnderflow\n")

    def show(self):
        if len(self.queue) != 0:
            print("\nQueue elements (1st -> Last):", end=" ")
            for data in self.queue:
                print(f"{data}", end=" ")
            print("\n")
        else:
            print("\nYou cannot display a empty queue!\n")

user_queue = Queue()
choice = -1
while choice != 0:
    print("1.Enqueue\n2.Dequeue\n3.Show Queue\n0.Exit\n")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        user_queue.enqueue()
    elif choice == 2:
        user_queue.dequeue()
    elif choice == 3:
        user_queue.show()
    elif choice == 0:
        print("Exiting the program...")
    else:
        print("Please enter a valid number\n")
exit(0)