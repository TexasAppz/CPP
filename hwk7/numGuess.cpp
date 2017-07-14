#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tries = 0;
    double guess, num;
    
    cout <<"Enter the number for the player to guess" << endl;
    cin >> num;
    cout <<"Enter your guess" << endl;
    
    do {
        cin >> guess;
        tries ++;
        if(guess > num)
        {
            cout <<"too high - try again" << endl;
        }
        else if(guess < num)
        {
            cout <<"too low - try again" << endl;
        }
        else
            cout <<"you guess it in: "<< tries << " tries" << endl;
        
    } while(guess != num);
    
    return 0;
}
