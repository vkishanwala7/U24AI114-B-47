class Bank:
    def __init__(self):
        print("\nBank Portal successfully opened!\n")
        self.customer_accounts = {}

    def create_account(self, account_number, password):
        if account_number not in self.customer_accounts.keys():
            self.customer_accounts[account_number] = [password, 0]
            print("\nAccount successfully created!\n")
        else:
            account_number = int(input("\nAccount number already exist! Please try another number: "))
            self.create_account(account_number, password)

    def account_login(self, account_number, password):
        if len(self.customer_accounts) != 0:
            if account_number in self.customer_accounts.keys():
                if self.customer_accounts[account_number][0] == password:
                    print("\nAccount successfully opened!\n")
                    self.account_number = account_number
                    return -1
                else:
                    print("\nIncorrect password!\n")
                    return 0
            else:
                print("\nIncorrect account number\n")
                return 0
        else:
            print("\nNo accounts created! Please create a account and try again!\n")
            return 0

    def deposit(self, deposit_amount):
        (self.customer_accounts[self.account_number])[1] += deposit_amount
        print("\nAmount successfully deposited! Transaction Completed!\n")

    def withdraw(self, withdraw_amount):
        if (self.customer_accounts[self.account_number])[1] >= withdraw_amount:
            (self.customer_accounts[self.account_number])[1] -= withdraw_amount
            print("\nAmount successfully withdrawn! Transaction Completed!\n")
        else:
            print(f"\nYou cannot withdraw more than your balance! Balance = {(self.customer_accounts[self.account_number])[1]}\n")

    def show_details(self):
        print(f"\nYour account number: {self.account_number}")
        print(f"Balance: ${(self.customer_accounts[self.account_number])[1]:.3f}\n")

my_bank = Bank()
choice = -1
while choice != 0:
    choice = int(input("1.Create New Account\n2.Account Login\n0.Exit\n\nEnter your choice: "))
    
    if choice == 1:
        account_number = int(input("\nEnter a account number: "))
        password = str(input("Enter your account password: "))
        my_bank.create_account(account_number, password)
    
    elif choice == 2:
        account_number = int(input("\nEnter your account number: "))
        password = str(input("Enter your account password: "))
        inner_choice = my_bank.account_login(account_number, password)
        
        while inner_choice != 0:
            inner_choice = int(input("1.Deposit\n2.Withdraw\n3.Check account details\n0.Exit\n\nEnter your choice: "))
            
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
                my_bank.show_details()
                
            elif inner_choice == 0:
                print("\nLogging you out..\nSuccessfully logged out\n")

            else:
                print("\nPlease enter a valid number!\n")
    
    elif choice == 0:
        print("\nExiting the program...")
    
    else:
        print("\nPlease enter a valid number!\n")
exit(0)
