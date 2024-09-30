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


void startGame()
{
        cout << "Welcome to your adventure game!" << endl;
        cout << "You find yourself alone in the woods, infront of an abandoned castle" << endl;
}
    
int forestChoice(), stayChoice();

int firstChoice()
{
    int score=0;
        int choice;
        cout << "Do you want to (1) start searching the forest, (2) go towards the castle or (3) stay put and wait for other people to find you?" << endl;
        cin >> choice;
        
        switch (choice){
            case 1:
                cout << "You begin to walk further into the forest" << endl;
                forestChoice();
                score+= 3;
                break;
            case 2:
                cout << "You advance further into the castle, unarmed" << endl;
                score += 5;
               break;
            case 3:
                cout << "You sit down on the ground and begin to wait and hope for people to find you" << endl;
                score += 1;
                break;
            default:
                cout << "It is getting dark and cold outside and you need to make a decision soon." << endl;
                firstChoice(); // the user must input a valid number or will be repeatedly prompted
                break;
        }
    return score;
}
    


// function if the user chooses to explore the forest
int forestChoice()
{
    int score=0;
    int choice;
    cout << "You walk through the woods for a while, before eventually hearing the roar of a monster you have never heard before. do you (1) run back to the castle for shelter or (2) try to hide in the woods?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you manage to outrun the monster and reach the castle" << endl;
        score+=2;
    }
    else if (choice==2)
    {
        cout << "you try to hide in the forest but are unable to outrun the monster and it catches you anyways. you die." << endl;
        return 0;
        
    }
    return score;
}

// function if the user chooses to stay put
//void stayChoice()
//{
    
//}
int secondChoice()
{
    int score;
    int choice;
    cout << "You walk through the castle and notice various weapons lying around. do you pick up the (1) bow and arrow, (2) the sword or (3) the gun?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You pick up the bow and there are only 4 arrows " << endl;
            score+= 3;
            break;
        case 2:
            cout << "You pick up the sword and it is perfectly balanced and weighted in your hand" << endl;
            score += 5;
           break;
        case 3:
            cout << "You pick up the gun, but there is only one bullet" << endl;
            score += 1;
            break;
        default:
            cout << "you decide not to pick up any of the weapons and keep walking through the castle" << endl;
            score -= 1;
            break;
    }
return score;
}
    
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


int main()
{
    int score=0;
    startGame();
    firstChoice();
    secondChoice();
    cout << "your total score is: " << score <<endl;
    return 0;
}
