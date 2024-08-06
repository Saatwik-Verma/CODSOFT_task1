#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0))); // seeds the random number generation
    //seeding prevents the number from being generated in a same orded, different random numbers generated on each run.

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1; // rand()%100 generates a number between 1 and 99, "+1" makes it 100
    int userGuess = 0; // creates a varuable named userGuess and initializes it to 0

    cout << "Welcome to the number guessing game!" << ::endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << ::endl;

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) // condition = run untill the userGuess is not equal to randomNumber
    {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }

    return 0;
}

