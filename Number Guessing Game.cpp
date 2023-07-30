#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int number, guess, tries = 0;
    srand(time(0)); 
    number = rand() % 50 + 1; 
    cout << "Number Guessing Game\n\n";
    do
    {
        cout << "Enter a guess between 1 and 50 : ";
        cin >> guess;
        tries++;
        if (guess > number)
            cout << "Too high!\n\n";
        else if (guess < number)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! Woah You got it in " << tries << " guesses!\n";
    } 
    while (guess != number);
    return 0;
}
