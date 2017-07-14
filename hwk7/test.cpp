#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    bool result = true;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            result = false;
        }
    }
    if(result)
    {
        cout << "true" << endl;
    }
    else{
        cout <<"false" << endl;
    }
    
    if(14 % 2 ==1 )
    {
        cout << "14 is odd" << endl;
    }
    return 0;
}
