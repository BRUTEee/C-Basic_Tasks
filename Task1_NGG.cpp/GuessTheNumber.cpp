#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));
    int randomnumber = rand() % 100 + 1;
    int userguess;
    int attempts = 0;

    cout<< "-------------------------------\n";
    cout << "Number Guessing Game\n";
    cout << "-------------------------------\n";
    cout << "Can you guess a number between 1 and 100?\n";

    while(true)
    {
        cout <<"Enter Your Guess:";
        cin >> userguess;
        attempts++;

        if (userguess > randomnumber) 
        {
        cout << "Too High! Try Again.\n";
        }
        else if (userguess < randomnumber)
        {
        cout << "Too Low! Try Again.\n";
        }
        else 
        {
            cout << "Nice! You Guessed it in" << attempts << "Tries.\n";
            break;
        }
    }

    return 0;
}
