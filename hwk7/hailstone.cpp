#include <iostream>
using namespace std;

//Hailstone function takes the input of the current number
//then calculates the next number in the hailstone sequence
int hailstone(int num)
{
    if (num % 2 == 0) {
        return num /= 2; //number is even
    }
    else {
        return num = (num * 3) + 1;  //number is odd
    }
}

int main()
{
    int start =0;
    int count = 0;
    cout << "Input a number: " << endl;
    cin >> start;
    cout << "-----------------------" << endl;
    if (start > 0) {
        while (start != 1) {
            start = hailstone(start);
            cout << start << endl;
            count++;
        }
        cout << "-----------------------" << endl;
        cout << "Length of sequence is: " << count++ << endl;
    }
    else {
        cout << "Please enter a number greater than Zero " << endl;
    }
    return 0;
}
