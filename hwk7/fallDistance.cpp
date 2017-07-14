#include <iostream>
using namespace std;
double fallDistance(double t)
{
    double d = 0.5 * 9.8 * (t * t);
    return d;
}

int main()
{
    double time;
    cout <<"Distance formula" << endl;
    cout <<"Enter time" << endl;
    cin >> time;
    cout <<"Distance is: " << fallDistance(time) << endl;
    return 0;
}
