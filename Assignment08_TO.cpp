//  Assignments
//
//  Created by Kenny To on 9/29/16.
//  Copyright © 2016 Kenny To. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    
    char first, second;
    
    string rock = "Rock smashes scissors. ";
    string paper = "Paper covers rock. ";
    string scissors = "Scissors cuts paper. ";
    string tie = "Draw!";
    string winner1 = "Player 1 WINS!";
    string winner2 = "Player 2 WINS!";
    
    cout << "Player 1, Enter [R]ock, [P]aper, or [S]cissor: ";
    
    cin >> first;
    
    cout << "Player 2, Enter [R]ock, [P]aper, or [S]cissor: ";
    
    cin >> second;
    
    switch (first)
    
    {
        case 's':
        case 'S':
        {
            switch (second)
            {
                case 's':
                case 'S':
                {
                    cout << tie << endl;
                    break;
                }
                case 'p':
                case 'P':
                {
                    cout << scissors << winner1 << endl;
                    break;
                }
                case 'r':
                case 'R':
                {
                    cout << rock << winner2 << endl;
                    break;
                }
            }
            break;
        }
        case 'p':
        case 'P':
        {
            switch (second)
            {
                case 's':
                case 'S':
                {
                    cout << scissors << winner2 << endl;
                    break;
                }
                case 'p':
                case 'P':
                {
                    cout << tie <<endl;
                    break;
                }
                case 'r':
                case 'R':
                {
                    cout << paper << winner1 << endl;
                    break;
                }
            }
            break;
        }
        case 'r':
        case 'R':
        {
            switch (second)
            {
                case 's':
                case 'S':
                {
                    cout << rock << winner1 << endl;
                    break;
                }
                case 'p':
                case 'P':
                {
                    cout << paper << winner2 << endl;
                    break;
                }
                case 'r':
                case 'R':
                {
                    cout << tie << endl;
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
