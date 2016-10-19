//  Assignments
//
//  Created by Kenny To on 9/29/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    int numerator, denominator;
    char operation;
    
    cout << "Input calculation: ";
    cin >> numerator >> operation >> denominator;
    
    switch (operation)
    
    {
        case '+':
            cout << numerator + denominator << endl;
            break;
        case '-':
            cout << numerator - denominator << endl;
            break;
        case '*':
            cout << numerator * denominator << endl;
            break;
        case '/':
            if (denominator == 0)
            
            {
            cout << "Cannot divide by zero" << endl;
            return 0;
            }
            cout << numerator / denominator << endl;
            break;
        
        default:
            cout << "Illegal Operation" << endl;
            return 0;
    }

    return 0;
    
}
