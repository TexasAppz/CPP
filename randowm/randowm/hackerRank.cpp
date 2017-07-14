//
//  hackerRank.cpp
//  randowm
//
//  Created by Garcia, Jaime on 7/11/17.
//  Copyright © 2017 Garcia, Jaime. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    
    for(int i = 0; i < n; i++)
    {
        ar.push_back(i);
        
    }
    cout << ar[n]++ << " number" << endl;


    
    return 0;
    
}
