//
//  main.cpp
//  choose your own adventure game
//
//  Created by maya nachiappan on 9/25/24.
//

#include <iostream>
using namespace std;

void startGame(), firstChoice(), secondChoice(), thirdChoice(), fourthChoice(), fifthChoice(), sixthChoice(), seventhChoice(), eigthChoice(), ninthChoice(), tenthChoice(), endGame();


int main()
{
    int score=0;
    startGame();
    return 0;
}

void startGame()
{
    cout << "Welcome to your adventure game!" << endl;
    cout << "You find yourself alone in an abandoned castle" << endl;
    firstChoice();
}

void firstChoice()
{
    int choice;
    cout << "Do you want to (1) start searching the castle or (2) search for weapons first?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You find a small sword" << endl;
            break;
        case 2:
            cout << "You advance further into the castle, unarmed" << endl;
            break;
        default:
            cout << "It is getting dark outside and you need to make a decision soon." << endl;
            firstChoice();
            break;
    }
}
void secondChoice()
{
    
}
void thirdChoice()
{
    
}
void fourthChoice()
{
    
}
void fifthChoice()
{
    
}
void sixthChoice()
{
    
}
void seventhChoice()
{
    
}
void eigthChoice()
{
    
}
void ninthChoice()
{
    
}
void tenthChoice()
{
    
}
