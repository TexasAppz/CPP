#include <stdio.h>
#include <iostream>
using namespace std;

void swapper(double& value1, double& value2);
int main()
{
    double val1, val2;
    cout << "Enter first number" << endl;
    cin >> val1;
    cout << " Enter second number" << endl;
    cin >> val2;
    
    swapper(val1,val2);
    
    cout <<"first number is: " << val1 << endl;
    cout <<"Second number is: " << val2 << endl;
    return 0;
}

void swapper(double& value1, double& value2)
{
    double temp = value1;
    value1 = value2;
    value2 = temp;
}
