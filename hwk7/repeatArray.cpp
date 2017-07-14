#include <iostream>
#include <string>
using namespace std;


void repeatArray(double* &myArray, int size)
{
    double* tempArray = new double[2 * size];
    
    for(int i=0;i<size;i++){
        tempArray[i] = myArray[i];
        tempArray[i+size] = myArray[i];
    }
    // free the memory pointed by myArray
    delete [] myArray;
    // now it points to the same location as tempArray , i.e, the new array
    myArray = tempArray;
}
int main()
{
    int size=3;
    double* myArray = new double[size];
    myArray[0]=3.1;
    myArray[1]=4.2;
    myArray[2]=5.3;
    
    repeatArray(myArray,size);
    for(int i=0; i<2*size; i++){
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
    // delete [] myArray;
    return 0;
}

