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
    
    cout << "Player 1, Enter [R]ock, [P]aper, or [S]cissor: ";
    
    cin >> first;
        
    cout << "Player 2, Enter [R]ock, [P]aper, or [S]cissor: ";
    
    cin >> second;
    
   
        if (((first == 'P' )|| (first == 'p')) && ((second == 'P') || (second == 'p')))
        cout << "Draw!";
        
        else if (((first == 'R') || (first == 'r')) && ((second == 'R') || (second == 'r')))
        cout << "Draw!";
        
        else if (((first == 'S') || (first == 's')) && ((second == 's') || (second == 'S')))
        cout << "Draw!";
        
        else if (((first == 'P') || (first == 'p')) && ((second == 'R') ||( second == 'r')))
        cout << "Paper covers rock. Player 1 WINS.";
        
        else if ((first == 'S' || first == 's') && (second == 'P' || second == 'p'))
        cout << "Scissors cuts paper. Player 1 WINS.";
        
        else if ((first == 'R' || first == 'r') && (second == 'S' || second == 's'))
        cout << "Rock smashes scissors. Player 1 WINS.";
        
        else if ((first == 'P' || first == 'p') && (second == 'S' || second == 's'))
        cout << "Scissors cuts Paper. Player 2 WINS.";
        
        else if ((first == 'R' || first == 'r') && (second == 'P' || second == 'p'))
        cout << "Paper covers Rock. Player 2 WINS.";
        
        else if ((first == 'S' || first == 's') && (second == 'R' || second == 'r'))
        cout << "Rock smashes scissors. Player 2 WINS.";
   
        
    cout << endl;
    
    return 0;
    
}
