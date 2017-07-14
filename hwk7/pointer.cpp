//
//  pointer.cpp
//  hwk7
//
//  Created by Garcia, Jaime on 6/24/17.
//  Copyright © 2017 Garcia, Jaime. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int firstNum = 8;
    int secondNum = 19;
    swap(&firstNum, &secondNum);
    cout << "fisrNum = " << firstNum << endl;
    cout << "secondNum = " << secondNum << endl;
    
    return 0;
}


