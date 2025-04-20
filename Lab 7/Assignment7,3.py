class Bank:
    def __init__(self):
        print("\nBank Portal successfully opened!\n")
    
    customer_accounts = {}

    def create_account(self, username, password):
        if username not in self.customer_accounts.keys():    
            self.customer_accounts[username] = [password, 0]
            print("\nAccount successfully created!\n")
        else:
            username = str(input("\nUsername already taken! Please try another username: "))
            self.create_account(username, password)

    def account_login(self, username, password):
        if len(self.customer_accounts) != 0:    
            if username in self.customer_accounts.keys():
                if self.customer_accounts[username][0] == password:
                    print("\nAccount successfully opened!\n")
                    self.username = username
                    return -1
                else:
                    print("\nIncorrect password!\n")
                    return 0
            else:
                print("\nIncorrect username\n")
                return 0
        else:
            print("\nNo accounts created! Please create a account and try again!\n")
            return 0

    def deposit(self, deposit_amount):
        (self.customer_accounts[self.username])[1] += deposit_amount
        print("\nAmount successfully deposited! Transaction Completed!\n")

    def withdraw(self, withdraw_amount):
        if (self.customer_accounts[self.username])[1] >= withdraw_amount:
            (self.customer_accounts[self.username])[1] -= withdraw_amount
            print("\nAmount successfully withdrawn! Transaction Completed!\n")
        else:
            print(f"\nYou cannot withdraw more than your balance! Balance = {(self.customer_accounts[self.username])[1]}\n")

    def show_balance(self):
        print(f"\nYour account balance is ${(self.customer_accounts[self.username])[1]:.3f}\n")

my_bank = Bank()
choice = -1
while choice != 0:
    choice = int(input("1.Create New Account\n2.Account Login\n0.Exit\n\nEnter your choice: "))
    
    if choice == 1:
        username = str(input("\nEnter your account username: "))
        password = str(input("Enter your account password: "))
        my_bank.create_account(username, password)
    
    elif choice == 2:
        username = str(input("\nEnter your account username: "))
        password = str(input("Enter your account password: "))
        inner_choice = my_bank.account_login(username, password)
        
        while inner_choice != 0:
            inner_choice = int(input("1.Deposit\n2.Withdraw\n3.Check Balance\n0.Exit\n\nEnter your choice: "))
            
            if inner_choice == 1:
                deposit_amount = float(input("Enter your deposit amount: "))
                while deposit_amount < 0:
                    deposit_amount = float(input("Please enter a positive value: "))
                my_bank.deposit(deposit_amount)
            
            elif inner_choice == 2:
                withdraw_amount = float(input("Enter your withdraw amount: "))
                while withdraw_amount < 0:
                    withdraw_amount = float(input("Please enter a positive value: "))
                my_bank.withdraw(withdraw_amount)
            
            elif inner_choice == 3:
                my_bank.show_balance()
                
            elif inner_choice == 0:
                print("\nLogging you out..\nSuccessfully logged out\n")

            else:
                print("\nPlease enter a valid number!\n")
    
    elif choice == 0:
        print("\nExiting the program...")
    
    else:
        print("\nPlease enter a valid number!\n")
exit(0)
