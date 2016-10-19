//
//  main.cpp
//  Assignment04_To
//
//  Created by Kenny To on 9/29/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int x;
    
    cout << "Enter a number: " ;
    cin >> x ;
    
    {
        if (x < 0)
                cout << "The number is negative. " << endl;
    }
    
    {
        if (x > 0)
                cout << "The number is positive. " << endl;
    }
    
    {
        if (x == 0)
                cout << "The number is zero. " << endl;
    }
    return 0;
}
