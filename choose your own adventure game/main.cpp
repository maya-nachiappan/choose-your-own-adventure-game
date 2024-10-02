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

int score=0;
bool ability=0;
char specialAbility;

// declaring functions
void startGame(), doorwayChoice();
int forestChoice(), stayChoice(), firstChoice(), secondChoice(), thirdChoice();

int main()
{
    int totalScore=0;
    startGame();
    totalScore+=firstChoice();
    totalScore+= secondChoice();
    totalScore+= thirdChoice();
    
    cout << "your total score is: " << totalScore <<endl;
    return 0;
}

void startGame()
{
    cout << "Welcome to your adventure game!"<<endl;
    cout << "You find yourself alone in the woods, infront of an abandoned castle" << endl;
    
}

// the user chooses where to go
int firstChoice()
{
    
        int choice;
    int score=0;
        cout << "Do you want to (1) start searching the forest, (2) go towards the castle or (3) stay put and wait for other people to find you?" << endl;
        cin >> choice;
        
        switch (choice){
            case 1:
                cout << "You begin to walk further into the forest" << endl;
                score+= 3;
                score+=forestChoice();
                return score;
                break;
            case 2:
                cout << "You advance further into the castle, unarmed" << endl;
                return score += 5;
               break;
            case 3:
                cout << "You sit down on the ground and begin to wait and hope for people to find you" << endl;
                score += 1;
                return score+= stayChoice();
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
    
    int choice;
    int score=0;
    cout << "You walk through the woods for a while, before eventually hearing the roar of a monster you have never heard before. do you (1) run back to the castle for shelter or (2) try to hide in the woods?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you manage to outrun the monster and reach the castle" << endl;
        return score+=2;
    }
    else if (choice==2)
    {
        cout << "you try to hide in the forest but are unable to outrun the monster and it catches you anyways. you die." << endl;
         return 0;
        
    }
    return score;
}

// function if the user chooses to stay put
int stayChoice()
{
    int choice;
    int score=0;
    cout << "You sit on the ground for what seems to be hours before realizing nobody is coming to find you. do you (1) try to go back to the castle (2) try to explore the woods?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you manage to find and get back to the castle safely" << endl;
        return score+=2;
    }
    else if (choice==2)
    {
        cout << "you give up on waiting and try to explore the forest" << endl;
        score+=1;
        return score += forestChoice();
        
    }
    else {
        cout << "You need to pick an option." << endl;
        stayChoice();
    }
    return score;
    
}

// the user chooses a weapon
int secondChoice()
{
    
    int choice;
    int score=0;
    cout << "You walk through the castle and notice various weapons lying around. do you pick up the (1) bow and arrow, (2) the sword or (3) the gun?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You pick up the bow and there are only 4 arrows " << endl;
            return score+= 3;
            break;
        case 2:
            cout << "You pick up the sword and it is perfectly balanced and weighted in your hand" << endl;
            return score += 5;
           break;
        case 3:
            cout << "You pick up the gun, but there are only two bullets" << endl;
            return score += 1;
            break;
        default:
            cout << "you decide not to pick up any of the weapons and keep walking through the castle" << endl;
            return score -= 1;
            break;
    }
return score;
}
    
// the user chooses to explore a doorway
int thirdChoice()
{
    int score=0;
    int choice;
    cout << "You come across a corridor with a doorway that is blocked off with large planks of wood. do you (1) try to find a way inside or (2) leave the doorway and continue exploring the rest of the castle?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You manage to pull apart the wooden planks" << endl;
            doorwayChoice();
            return score+= 5;
            break;
        case 2:
            cout << "You leave the blockaded doorway alone, rather than trying to mess with whatever is beyond it." << endl;
            return score += 2;
           break;
        default:
            cout << "you need to make a decision!" << endl;
            thirdChoice();
            break;
    }
return score;
    
}
void doorwayChoice() // function for adding user ability
{
    
    int choice;
    cout << "The previously-blockaded doorway opens into a room filled with multi colored bottles lying around. Upon further inspection, you realize they are potions. Which potion do you pick: (1) the yellow potion in a small square bottle (2) the blue potion in a spherical bottle or (3) the red potion in a tiny vial?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You drink the fire potion and get the ability to throw fireballs" << endl;
          
            break;
        case 2:
            cout << "You drink the water potion and get the ability to move water" << endl;
            
           break;
        case 3:
            cout << "you drink the red potion and get the ability to blast air" << endl;
        default:
            cout << "you need to make a decision!" << endl;
            thirdChoice();
            break;
    }
    
}
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
