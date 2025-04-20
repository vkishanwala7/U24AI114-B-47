DEFAULT_PASSWORD = "yr39eho-3U7$2"

class PasswordManager:
    def __init__(self, password = DEFAULT_PASSWORD):
        self.old_passwords = []
        
        if password == "yr39eho-3U7$2":
            print("\nYou choose default password!\n")
        
        (self.old_passwords).append(password)
        self.current_password = self.old_passwords[-1]
        return None

    def is_true(self, password):
        if password == self.current_password:
            return True
        else:
            return False
    
    def get_password(self):
        print(f"Your current password is {self.current_password}\n")
        return self.current_password
        
    def set_password(self, password):
        for old_password in self.old_passwords:
            if old_password == password:
                print("Your new password cannot be same as one of your old passwords!\n")
                return None
        self.old_passwords.append(password)
        self.current_password = self.old_passwords[-1]
        print("Password successfully changed!\n")
        return None
    
user = PasswordManager()
choice = -1
while choice != 0:
    print("1.Get your current password\n2.Set new password\n3.Check if the password you enter is correct\n0.Exit\n")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        user.get_password()
    elif choice == 2:
        password = str(input("Enter your new password: "))
        user.set_password(password)
    elif choice == 3:
        password = str(input("Enter your password: "))
        correct = user.is_true(password)
        if correct:
            print("The password you entered is correct\n")
        else:
            print("The password you entered is incorrect\n")
    elif choice == 0:
        print("Exiting the program...")
        exit(0)
    else:
        print("Please enter a valid number!\n")
