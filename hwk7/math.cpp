#include <iostream>
#include <cmath>
using namespace std;

double square(double num)
{
    double powX;
    
    powX = pow(num, 2.0);
    return powX;
}
int main()
{
    double x;
    cout << "enter the base: \n";
    cin >> x;
    cout << square(x) << endl;
    
    return 0;
}
