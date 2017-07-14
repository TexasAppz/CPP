#include <iostream>
#include <string>
using namespace std;

int main()
{
    string familia[4] = {"sonia", "Helena", "Rosario", "Alonso"};
    
    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            cout << familia[i] <<"  "<< familia[j] << endl;
            cout << i << " " << j << endl;
        }
        

    }
    return 0;
}
