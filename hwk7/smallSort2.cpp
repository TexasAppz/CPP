#include <iostream>
#include <string>
using namespace std;

void smallSort2(int* num1, int* num2, int* num3)
{
    int temp;
    if(*num1>*num2) {
        temp = *num1;
        *num1=*num2;
        *num2=temp;
    }
    // now we know num1 is less than num2
    if(*num2>*num3){
        temp = *num2;
        *num2=*num3;
        *num3=temp;
        // now we know num2 is smaller than num3
        // now we compare num1 and num2 because value of num2 is changed recently
        
        if(*num1>*num2) {
            temp = *num1;
            *num1=*num2;
            *num2=temp;
            //now we know num1 is smaller than num2
        }
    }
    // now num1<num2<num3
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
    smallSort2(&n1, &n2, &n3);
    
    cout<<"the asceding order of these numbers is:" << endl;
    smallSort(n1,n2,n3);
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    
    
    return 0;
}
