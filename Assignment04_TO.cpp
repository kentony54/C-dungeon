//  Assignments
//
//  Created by Kenny To on 9/29/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    cout << "Input three numbers:" <<endl;
    cin >> a >> b >> c;
    
    if (a>b && b>c)
    
        {
        cout << c <<" "<< b <<" "<< a;
        }
    
        else if (a > c && c > b)
        cout<< b <<" "<< c <<" "<< a;
    
        else if (b > a && a > c)
        cout << c <<" "<< a <<" "<< b;
    
        else if (b > c && c > a)
        cout << a <<" "<< c <<" "<< b;
    
        else if (c > a && a > b)
        cout << b <<" "<< a <<" " << c;
    
        else cout << c <<" "<< b <<" "<< a;
    
    return 0;
}
