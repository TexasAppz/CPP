#include <iostream>
using namespace std;

void smallSort(int& num1, int& num2, int& num3);

void smallSort(int& num1, int& num2, int& num3)
{
    int temp;
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
        if(num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
}

int main()
{
    int n1, n2, n3;
    cout <<"Please enter your first number" << endl;
    cin >> n1;
    cout <<"Please enter your second number" << endl;
    cin >> n2;
    cout <<"Please enter your third number" << endl;
    cin >> n3;
    cout<<"the asceding order of these numbers is:" << endl;
    
    smallSort(n1,n2,n3);
    
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    
    return 0;
    
}
