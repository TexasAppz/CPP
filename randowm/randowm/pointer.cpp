#include <iostream>
using namespace std;

int main() {
    
    int number = 240; //define an int veriable
    int *numPtr = &number;
    cout << numPtr << endl;
    cout << &number << endl;
    
    int number2 = 13.5;
    numPtr = &number2;
    cout << numPtr << endl;
    cout << &number2 << endl;
    
    
    return 0;
    
}


