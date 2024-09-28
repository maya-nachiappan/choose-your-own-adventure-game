//
//  main.cpp
//  choose your own adventure game
//
//  Created by maya nachiappan on 9/25/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

void startGame();
int forestChoice(), stayChoice();
void firstChoice(), secondChoice(), thirdChoice(), fourthChoice(), fifthChoice(), sixthChoice(), seventhChoice(), eigthChoice(), ninthChoice(), tenthChoice(), endGame();

int main()
{
    startGame();
    firstChoice();
    return 0;
}
    
    void startGame()
    {
        cout << "Welcome to your adventure game!" << endl;
        cout << "You find yourself alone in the woods, infront of an abandoned castle" << endl;
    }
    
    void firstChoice()
    {
        int choice;
        int score=0;
        cout << "Do you want to (1) start searching the forest, (2) go towards the castle or (3) stay put and wait for other people to find you?" << endl;
        cin >> choice;
        
        switch (choice){
            case 1:
                cout << "You begin to walk further into the forest" << endl;
                score+=3;
                forestChoice();
                break;
            case 2:
                cout << "You advance further into the castle, unarmed" << endl;
                score +=5;
                break;
            case 3:
                cout << "You sit down on the ground and begin to wait and hope for people to find you" << endl;
                score += 1;
                break;
            default:
                cout << "It is getting dark and cold outside and you need to make a decision soon." << endl;
                firstChoice();
                break;
        }
    }
    


// function if the user chooses to explore the forest
int forestChoice()
{
    int choice;
    cout << "You walk through the woods for a while, before eventually hearing the roar of a monster you have never heard before. do you (1) run back to the castle for shelter or (2) try to hide in the woods?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you manage to outrun the monster and reach the castle" << endl;
    }
    else if (choice==2)
    {
        cout << "you try to hide in the forest but are unable to outrun the monster and it catches you anyways. you die." << endl;
        return 0;
    }
    
}
// function if the user chooses to stay put
//void stayChoice()
//{
    
//}
//int secondChoice()
//{
    
//}
//int thirdChoice()
//{
    
//}
//void fourthChoice()
//{
    
//}
//void fifthChoice()
//{
    
//}
//void sixthChoice()
//{
    
//}
//void seventhChoice()
//{
    
//}
//void eigthChoice()
//{
    
//}
//void ninthChoice()
//{
    
//}
//void tenthChoice()
//{

//}
