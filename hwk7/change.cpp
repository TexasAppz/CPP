#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cent, quarter, dime, nickle, penny;
    int residual_quarter, residual_dime,residual_nickle;
    
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cent;
    
    if(cent <= 99 && cent >= 0)
    {
        if(cent >= 25)
        {
            quarter = cent / 25;
        }
        else
            quarter = 0;
        
        cout <<"Your change will be: " << endl;
        cout << "Q " << quarter << endl;
        
        residual_quarter = cent % 25;
        
        if(residual_quarter >= 10)
        {
            dime = residual_quarter / 10;
        }
        else
            dime = 0;
    
        cout <<"D " << dime << endl;
         residual_dime = residual_quarter % 10;
        
        if(residual_dime >= 5)
        {
            nickle = residual_dime / 5;
        }
        else
            nickle = 0;
       
        cout <<"N " << nickle << endl;
        residual_nickle = residual_dime % 5;
        
        if(residual_nickle >= 1)
            penny = residual_nickle / 1;
        else
            penny = 0;
        cout <<"P "<< penny << endl;
    }
    
  
    
    return 0;
}
