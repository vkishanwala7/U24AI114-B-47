import random

class RockPaperScissors:
    def __init__(self):
        print("\nPlayer Created Successfully\n\nFor Rock(1)\nFor Paper(2)\nFor Scissors(3)\n----------------")
        return None
    
    choice = {1: "Rock", 2: "Paper", 3: "Scissors"}

    def single_round(self):
        player_choice = int(input("You choose: "))
        while player_choice not in [1, 2, 3]:
            player_choice = int(input("Please enter a choice from 1,2,3 only: "))
        computer_choice = self.get_computer_choice()
        
        self.round_winner(player_choice, computer_choice)

    def multiple_rounds(self,n):
        player_score = 0
        computer_score = 0
        for i in range(1, n+1):
            player_choice = int(input(f"Round {i}\nYou choose: "))
            while player_choice not in [1, 2, 3]:
                player_choice = int(input("Please enter a choice from 1,2,3 only: "))
            computer_choice = self.get_computer_choice()
            player_wins = self.round_winner(player_choice, computer_choice)
            if player_wins:
                player_score += 1
            else:
                computer_score += 1
        self.game_winner(player_score, computer_score)
            
    def get_computer_choice(self):
        computer_choice = random.randint(1,3)
        return computer_choice
    
    def round_winner(self,player_choice, computer_choice):
        if player_choice == computer_choice:
            print(f"You both choose {self.choice[player_choice]}. It's a Tie\n")
            return None
        elif (player_choice == 1 and computer_choice == 3) or \
             (player_choice == 2 and computer_choice == 1) or \
             (player_choice == 3 and computer_choice == 2):
            print(f"You win! {self.choice[player_choice]} beats {self.choice[computer_choice]}.\n")
            return True
        else:
            print(f"You lose! {self.choice[computer_choice]} beats {self.choice[player_choice]}.\n")
            return False
    
    def game_winner(self, player_score, computer_score):
        print(f"Your total score: {player_score}\nComputer total score: {computer_score}")
        if player_score > computer_score:
            print("Congratulations! You won the game!\n")
        elif player_score == computer_score:
            print("Game Tied!\n")
        else:
            print("You lost! Better luck next time!\n")
        return None

player = RockPaperScissors()
choice = -1
while choice != 0:
    choice = int(input("1.Play a single round\n2.Play Multiple Rounds\n0.Exit\n\nEnter your choice: "))
    if choice == 1:
        player.single_round()
    elif choice == 2:
        n = int(input("How many rounds you want to play: "))
        player.multiple_rounds(n)
    elif choice == 0:
        print("Exiting the program...")
        exit(0)
    else:
        print("Please enter a valid number!\n")
