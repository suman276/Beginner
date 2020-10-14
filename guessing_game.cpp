#include <iostream.h>
#include <cstdlib>
#include<ctime>
#include<conio.h>
void main() {
srand(time(0)); 
int num_to_guess = (rand() % 100) + 1;

int user_guess;
cout << "Guess a number from 1 to 100: ";
cin >> user_guess;
int num_guesses = 1;

while (user_guess != num_to_guess) {

if (user_guess < num_to_guess) {
cout << "Your guess was too low." << endl;
}
else {
cout << "Your guess was too high." << endl;
}

cout << "Guess again: ";
cin >> user_guess;
num_guesses++;
}

cout << "Hurray! You guessed it! It took you " << num_guesses << " tries."<<endl;

getch();
}
