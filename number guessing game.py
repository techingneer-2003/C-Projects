import random

def play_game():
    number_to_guess = random.randint(1, 100)
    attempts = 0
    guess = None

    print("Welcome to the Number Guessing Game!")
    print("I'm thinking of a number between 1 and 100.")

    while guess != number_to_guess:
        try:
            guess = int(input("Enter your guess: "))
            attempts += 1

            if guess < number_to_guess:
                print("Too low! Try again.")
            elif guess > number_to_guess:
                print("Too high! Try again.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    print(f"Congratulations! You've guessed the number {number_to_guess} in {attempts} attempts.")

if __name__ == "__main__":
    play_game()
