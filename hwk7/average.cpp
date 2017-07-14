#include <iostream>
using namespace std;

int main()
{
    double number, average;
    double sum = 0;
    
    cout << " Please anter five numbers." << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> number;
        sum += number;
    }
    cout << "The average number is then:" << endl;
    average = sum / 5.0;
    cout << average << endl;
    
    return 0;
}
