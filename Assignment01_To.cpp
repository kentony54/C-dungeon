//
//  main.cpp
//  Assignment01_To
//
//  Created by Kenny To on 9/15/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int hours;
    int minutes;
    int seconds;
    
    int time = 0;
    cout << "Enter time elapse, in seconds: ";
    cin >> time;
    cout << endl;
    
    hours = static_cast<int>(time / 3600);
    
    time = time - hours * 3600;
    
    minutes = static_cast<int>(time / 60);
    
    time = time - minutes * 60;
    
    seconds = time;
    
    cout << hours;
    if (minutes < 10)
        cout << ":0" << minutes;
    else
        cout << ":" << minutes;
    
    if (seconds < 10)
        cout << ":0" << seconds;
    else 
        cout << ":" << seconds;
    
    cout << endl;
    
    return 0;
} 
