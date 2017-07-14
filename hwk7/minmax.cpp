#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int input;
    double max = 0;
    double min = 0;
    int numberOfInt;
    
    cout <<"How many integers would you like to enter?" << endl;
    cin >> numberOfInt;
    cout <<"Please enter " << numberOfInt << " integers." << endl;
    cin >> input;
    
    min = max = input;
    
    for(int x = 1; x < numberOfInt; x++)
    {
        cin >> input;
        if (input < min)
        {
            min = input;
        }
        else if(input > max)
        {
            max = input;
        }
    }
   
    cout <<"min: " << min << endl;
    cout <<"max: " << max << endl;
    
    return 0;
}
