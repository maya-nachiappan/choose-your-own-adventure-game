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
#include <string>

using namespace std;

int score=0;
string weapon;
bool abilityOne=0, abilityTwo=0, abilityThree=0;
string ability1, ability2, ability3;

// declaring functions
void startGame(), doorwayChoice(), confront1();
int forestChoice(), stayChoice(), firstChoice(), secondChoice(), thirdChoice(), fourthChoice(), fifthChoice(), sixthChoice(),seventhChoice(),eightChoice(),ninthChoice(),tenthChoice(), rand(), obstacle1(), obstacle2(), lowScore1(), highScore1();

int main()
{
    
    int totalScore=0;
    startGame();
    totalScore+=firstChoice();
    totalScore+= secondChoice();
    cout << "you now have a "<< weapon <<" in your inventory!"<< endl;
    totalScore+= thirdChoice();
    if (abilityOne)
    {
        cout <<"you now have a special ability! this can be used later on." << endl;
    }
    totalScore+=fourthChoice();
    totalScore+=fifthChoice();
    if (totalScore>12) // the user gets a score check
    {
        totalScore+=highScore1();
    }
    else
    {
        totalScore+=lowScore1();
    }
    cout << "Your final score is: " << totalScore <<endl;
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
            cout << "You pick up the bow and there are 5 arrows " << endl;
            weapon ="bow and arrow";
            return score+= 3;
            break;
        case 2:
            cout << "You pick up the sword and it is perfectly balanced and weighted in your hand" << endl;
            weapon = "sword";
            return score += 5;
           break;
        case 3:
            cout << "You pick up the gun, but there are only three bullets" << endl;
            weapon = "gun";
            return score += 1;
            break;
        default:
            cout << "you decide not to pick up any of the weapons and keep walking through the castle" << endl;
            weapon = 'o';
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
            score+= 5;
            break;
        case 2:
            cout << "You leave the blockaded doorway alone, rather than trying to mess with whatever is beyond it." << endl;
            score += 2;
           break;
        default:
            cout << "you need to make a decision!" << endl;
            thirdChoice();
            break;
    }
return score;
    
}
void doorwayChoice() // function for adding special ability 1 if user goes into the doorway
{
    
    int choice;
    abilityOne=1;
    cout << "The previously-blockaded doorway opens into a room filled with multi colored bottles lying around. Upon further inspection, you realize they are potions. Which potion do you pick: (1) the yellow potion in a small square bottle (2) the blue potion in a spherical bottle or (3) the red potion in a tiny vial?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You drink the fire potion and get the ability to throw fireballs" << endl;
            ability1="fire bending ability";
          
            break;
        case 2:
            cout << "You drink the water potion and get the ability to move water" << endl;
            ability1="water bending ability";
           break;
        case 3:
            cout << "you drink the red potion and get the ability to blast air" << endl;
            ability1="air blasting ability";
            break;
        default:
            cout << "you need to make a decision!" << endl;
            thirdChoice();
            break;
    }
    
}

int fourthChoice() // the user gets to fight the first enemy
{
    int choice;
    int score=0;
    cout << "After walking around for a while, you suddenly hear the sound of a large monster running towards you!" << endl;
    cout<< "do you (1) run away in the opposite direction or (2) confront it?" << endl;
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "You immediately turn around and manage to run away from the unknown monster" << endl;
            return score+= 2;
            break;
        case 2:
            cout << "You stand your ground and decide to face the monster" << endl;
            confront1();
            return score += 5;
           break;
        default:
            cout << "You stand, frozen in fear and get struck down by the hydra! you die." << endl;
            return 0;
            break;
    }
return score;
}

void confront1() // the user fights the first monster, a hydra
{
    int choice;
    if (abilityOne){
        cout << "The monster turns out to be a hydra with three heads! you can defeat it using your (1) "<< weapon<<" or (2) your special ability!" << endl;
        cin >> choice;
        if (choice==1)
        {
            cout << "You successfully slay the hydra with your " <<weapon<< "! well done!" <<endl;
        }
        else if (choice==2)
        {
            cout << "You successfully slay the hydra with your "<<ability1<< "! well done!" <<endl;
        }
        else {
            cout << "you need to choose what to use!"<< endl;
            confront1();
        }
    }
    else
    {
        cout <<"You successfully slay the hydra with your " <<weapon<< "! well done!" <<endl;
    }
}

int randomGen() // generates a random value between 1 to 10
{
    const int minValue = 1; // minimum dice value
        const int maxValue =10; // maximum dice value
        int randomVal; // random dice variable values
        
        unsigned seed = time(0); // gets system time
        srand(seed); // gets new seed for random number generator every time the sytem time changes
        
        randomVal = (rand()% (maxValue-minValue + 1)) + minValue;
        return randomVal;
}

int fifthChoice() // the user gets a different obstacle based on a randomly generated number between 1 and 10
{
    int score=0;
    int value=randomGen();
    if (value%2==0)
    {
       score+=obstacle1();
    }
    else
    {
        score+=obstacle2();
    }
    return score;
}

int obstacle1() // the user sees a spooky hallway
{
    int choice;
    int score=0;
    cout << "After continuing through the castle corridors, you come across a spooky hallway that seems to be bigger than the others." << endl;
    cout << " do you (1) ignore the hallway and walk around it or (2) try to explore the hallway?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you ignore the spooky hallway. better safe than sorry" << endl;
        score+=1;
    }
    else if (choice==2)
    {
        cout << "you go into the hallway and realize its a shorcut towards the end of the castle! you feel more confident in escaping now!" << endl;
        score+=3;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle1();
    }
    return score;
}

int obstacle2() // the user sees a crumbling hallway
{
    int choice;
    int score=0;
    cout << "After continuing through the castle corridors, you come across a crumbling hallway that seems like it might be a shortcut to the end of the castle." << endl;
    cout << " do you (1) ignore the hallway and walk around it or (2) try to explore the hallway?" << endl;
    cin >> choice;
    if (choice==1)
    {
        cout << "you ignore the crumbling hallway. better safe than sorry" << endl;
        score+=3;
    }
    else if (choice==2)
    {
        cout << "you go into the hallway and quickly realize its not a shorcut and is on the verge of collapsing! you quickly run out." << endl;
        score+=1;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle2();
    }
    return score;

}

int highScore1() // the user gets another special ability if their current score is high
{
    int choice;
    int score=0;
    abilityTwo=1;
    cout << "you have a high score! you can now choose to get another special ability from a potion!" << endl;
    cout << "do you want the (1) ice potion or (2) stone shifting potion?" << endl;
    cin >> choice;
    switch (choice){
        case 1:
            cout << "You drink the ice potion and get the ability to throw icicles!" << endl;
            ability2="icicle ability";
            score+=1;
            break;
        case 2:
            cout << "You drink the stone potion and get the ability to shift rock!" << endl;
            ability2="rock shifting ability";
            score+=1;
            break;
        default:
            cout << "you need to make a decision!" << endl;
            highScore1();
            break;
    }
    return score;
}
    
int lowScore1() // the user gets a challenge to increase their score if it is low
    {
        int choice;
        int score=0;
        abilityTwo=1;
        cout << "you have a low score! you can now choose to go through 1 of 3 mystery doorways in order to get a score increase and it might possibly be a shortcut too!" << endl;
        cout << "do you want to go through the (1) the blue door, (2) the green door or (3) the yellow door?" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                cout << "You go through the blue door. It is not a shortcut but it has a small window and you notice it is night time now. you should keep moving." << endl;
                 score+=1;
                break;
            case 2:
                cout << "You go through the green door. congrats, its a shortcut!" << endl;
                score+=5;
                break;
            case 3:
                cout <<"You go through the yellow door. It isn't a shortcut, but you see a map on the wall. you know how to get to the end of the castle now!" << endl;
                score+=3;
                break;
            default:
                cout << "you need to make a decision!" << endl;
                lowScore1();
                break;
                
        }
        return score;
    }
//int sixthChoice()
//{
    
//}
//int seventhChoice()
//{
    
//}
//int eigthChoice()
//{
    
//}
//int ninthChoice()
//{
    
//}
//int tenthChoice()
//{

//}
