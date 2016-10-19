//
//  Assignment02_To.cpp
//  Assignments
//
//  Created by Kenny To on 9/22/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float netBalance;
    int d1; //Number of days of billing cycle.
    int d2; //Number of days payment is made before billing cycle.
    float payment;
    float averageDailyBalance;
    float interest;
    float interestRate;
    
    
    cout << "Enter the net balance:";
    cin >> netBalance;
    cout << endl;
    
    cout << "Enter the number of days of the billing cycle:";
    cin >> d1;
    cout << endl;
    
    cout << "Enter the payment amount:";
    cin >> payment;
    cout << endl;
    
    cout << "Enter the number of days payment is made before billing cycle:";
    cin >> d2;
    cout << endl;
    
    cout << "Enter interest rate per month: ";
    cin >> interestRate;
    
    averageDailyBalance = ((netBalance * d1 - payment * d2) / d1);
    interest = averageDailyBalance * interestRate;
    
    cout << "The interest on the unpaid balance is: " <<setprecision(5) <<interest << endl;
    
    return 0;
    
}
