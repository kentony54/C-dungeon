//  Assignments
//
//  Created by Kenny To on 9/29/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter a number between 0 and 35: ";
    cin >> num;
    cout << endl;
    
    if (num <= 9)
        cout << num << endl;
    else if (num >= 10 && num <= 35)
        cout << static_cast<char>('A' + (num - 10)) << endl;
   
    return 0;
}
