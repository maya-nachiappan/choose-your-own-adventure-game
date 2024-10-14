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

// initializing variables
int score=0;
string weapon;
bool abilityOne=0, abilityTwo=0, abilityThree=0;
string ability1, ability2, ability3;

// declaring functions
void startGame(), doorwayChoice(), confront1(), confront2(), endGame();
int forestChoice(),stayChoice(),firstChoice(),secondChoice(), thirdChoice(), fourthChoice(), fifthChoice(),sixthChoice(),seventhChoice(),eightChoice(),ninthChoice(), tenthChoice(), rand(), obstacle1(), obstacle2(), lowScore(), highScore(), obstacle3(),obstacle4(), obstacle5(), obstacle6();

int main()
{
    
    int totalScore=0; // initializing starting score
    startGame();
    totalScore+=firstChoice();
    totalScore+= secondChoice();
    cout << "you now have a "<< weapon <<" in your inventory!"<< endl; // prints name of weapon in user inventory
    cout << endl;
    totalScore+= thirdChoice();
    if (abilityOne) // if boolean variable is true
    {
        cout <<"you now have a special ability! this can be used later on." << endl; // prints name of ability user has
    }
    totalScore+=fourthChoice();
    totalScore+=fifthChoice();
    if (totalScore>12) // the user gets a score check if their score is high
    {
        totalScore+=highScore();
    }
    else // the user gets a different score check if their score is low
    {
        totalScore+=lowScore();
    }
    totalScore+=sixthChoice();
    totalScore+=seventhChoice();
    totalScore+=eightChoice();
    totalScore+=ninthChoice();
    totalScore+=tenthChoice();
    endGame();
    cout << "Your final score is: " << totalScore <<endl; // the final score of the user is printed if they beat the game
    return 0;
}

void startGame() // the user gets a starting message
{
    cout << "Welcome to your adventure game!"<<endl;
    cout <<endl;
    cout << "You find yourself alone in the woods, infront of a dusty, abandoned castle. You wonder where your friends are." << endl;
    
    
}

// the user chooses where to go
int firstChoice()
{
    
        int choice;
    int score=0;
        cout << "Do you want to (1) start searching the forest for your friends, (2) go towards the castle or (3) stay put and wait for your friends to find you?" << endl;
        cin >> choice;
    cout << endl;
        switch (choice){
            case 1:
                cout << "You begin to walk further into the forest" << endl;
                score+= 3;
                score+=forestChoice(); // the user gets sent to a different function if they choose to go into the forest
                return score;
                break;
            case 2:
                cout << "You advance further into the castle, unarmed" << endl;
                return score += 5;
               break;
            case 3:
                cout << "You sit down on the ground and begin to wait and hope for people to find you" << endl;
                score += 1;
                return score+= stayChoice(); // the user gets sent to a different function if they choose to stay
                break;
            default:
                cout << "It is getting dark and cold outside and you need to make a decision soon." << endl;
                firstChoice(); // the user must input a valid number or will be repeatedly prompted
                break;
        }
    cout << endl;
    return score;
}
    



int forestChoice() // function if the user chooses to explore the forest
{
    
    int choice;
    int score=0;
    cout << "You walk through the woods for a while, before eventually hearing the roar of a monster you have never heard before. do you (1) run back to the castle for shelter or (2) try to hide in the woods?" << endl;
    
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you manage to outrun the monster and reach the castle" << endl;
        return score+=2;
    }
    else if (choice==2)
    {
        cout << "you try to hide in the forest but are unable to outrun the monster and it catches you anyways. you die." << endl;
         exit (0); // the user dies and the program ends
        
    }
    cout << endl;
    return score;
}

int stayChoice() // function if the user chooses to stay put
{
    int choice;
    int score=0;
    cout << "You sit on the ground for what seems to be hours before realizing nobody is coming to find you. do you (1) try to go back to the castle (2) try to explore the woods?" << endl;
    
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you manage to find and get back to the castle safely" << endl;
        return score+=2;
    }
    else if (choice==2)
    {
        cout << "you give up on waiting and try to explore the forest" << endl;
        score+=1;
        return score += forestChoice(); // the user gets send to the forest function
        
    }
    else {
        cout << "You need to pick an option." << endl;
        stayChoice(); // the user is repeatedly prompted to choose an option
    }
    cout << endl;
    return score;
    
}

int secondChoice() // the user gets to choose a weapon and it is stored in a string variable
{
    
    int choice;
    int score=0;
    cout << "You walk through the castle and notice various weapons lying around. do you pick up the (1) bow and arrow, (2) the sword or (3) the gun?" << endl;
    
    cin >> choice;
    cout << endl;
    
    switch (choice){
        case 1:
            cout << "You pick up the bow and there are 5 arrows " << endl;
            weapon ="bow and arrow";
            score+= 3;
            break;
        case 2:
            cout << "You pick up the sword and it is perfectly balanced and weighted in your hand" << endl;
            weapon = "sword";
            score += 5;
           break;
        case 3:
            cout << "You pick up the gun, but there are only three bullets" << endl;
            weapon = "gun";
            score += 1;
            break;
        default:
            cout << "you need to pick a weapon!" << endl;
            secondChoice();
            break;
    }
    cout << endl;
return score;
}

int thirdChoice() // the user gets a choice to explore a doorway
{
    int score=0;
    int choice;
    cout << "You come across a corridor with a doorway that is blocked off with large planks of wood. do you (1) try to find a way inside or (2) leave the doorway and continue exploring the rest of the castle?" << endl;
   
    cin >> choice;
    cout << endl;
    switch (choice){
        case 1:
            cout << "You manage to pull apart the wooden planks and enter the doorway" << endl;
            cout << endl;
            doorwayChoice(); // the user gets sent to the doorway option
            score+= 5;
            break;
        case 2:
            cout << "You leave the blockaded doorway alone, rather than trying to mess with whatever is beyond it." << endl;
            score += 2;
           break;
        default:
            cout << "you need to make a decision!" << endl;
            thirdChoice(); // the user is repeatedly prompted to choose
            break;
    }
    cout << endl;
return score;
    
}

void doorwayChoice() // function for adding special ability 1 if user goes into the doorway
{
    
    int choice;
    abilityOne=1; // the boolean variable is set to true and the user gets to choose their first special ability and store it in a string
    cout << "The previously-blockaded doorway opens into a room filled with multi colored bottles lying around. Upon further inspection, you realize they are potions. Which potion do you pick: (1) the yellow potion in a small square bottle (2) the blue potion in a spherical bottle or (3) the red potion in a tiny vial?" << endl;
    cin >> choice;
    cout << endl;
    
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
    cout << endl;
}

int fourthChoice() // the user gets to fight the first enemy
{
    int choice;
    int score=0;
    cout << "After walking around for a while, you suddenly hear the sound of a large monster running towards you!" << endl;
    cout<< "do you (1) run away in the opposite direction or (2) confront it?" << endl;
    cin >> choice;
    cout << endl;
    switch (choice){
        case 1:
            cout << "You immediately turn around and manage to run away from the unknown monster" << endl;
            return score+= 2;
            break;
        case 2:
            cout << "You stand your ground and decide to face the monster" << endl;
            confront1(); // the user gets sent to confront option
            return score += 5;
           break;
        default:
            cout << "You stand, frozen in fear and get struck down by the hydra! you die." << endl;
            exit(0);
            break;
    }
    cout << endl;
return score;
}

void confront1() // the user fights the first monster, a hydra
{
    int choice;
    if (abilityOne){ // if the user has a special ability they are prompted with the option to use it
        cout << "The monster turns out to be a hydra with three heads! you can defeat it using your (1) "<< weapon<<" or (2) your special ability!" << endl;
        cin >> choice;
        cout << endl;
        if (choice==1) // the user uses the weapon they previously got
        {
            cout << "You successfully slay the hydra with your " <<weapon<< "! well done!" <<endl;
        }
        else if (choice==2) // the user uses their special ability
        {
            cout << "You successfully slay the hydra with your "<<ability1<< "! well done!" <<endl;
        }
        else {
            cout << "you need to choose what to use!"<< endl;
            confront1(); // user continously prompted
        }
    }
    else // if the user does not have a special ability
    {
        cout <<"You successfully slay the hydra with your " <<weapon<< "! well done!" <<endl;
        }
    cout << endl;
}

int randomGen() // a function that returns a random value between 1 to 10
{
    const int minValue = 1; // minimum value
        const int maxValue =10; // maximum value
        int randomVal; // random variable values
        
        unsigned seed = time(0); // gets system time
        srand(seed); // gets new seed for random number generator every time the sytem time changes
        
        randomVal = (rand()% (maxValue-minValue + 1)) + minValue; // a random value is generated between 1 and 10
        return randomVal;
}

int fifthChoice() // the user gets a different obstacle based on a randomly generated number between 1 and 10
{
    int score=0;
    int value=randomGen(); // a random value between 1 and 10 is obstained
    if (value%2==0) // if the random value is even, the user get obstacle 1
    {
       score+=obstacle1();
    }
    else // if the random value is odd, the user gets obstacle 2
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
    cout << endl;
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
        obstacle1(); // the user is repeatedly prompted
    }
    cout << endl;
    return score;
}

int obstacle2() // the user sees a crumbling hallway
{
    int choice;
    int score=0;
    cout << "After continuing through the castle corridors, you come across a crumbling hallway that seems like it might be a shortcut to the end of the castle." << endl;
    cout << " do you (1) ignore the hallway and walk around it or (2) try to explore the hallway?" << endl;
    cin >> choice;
    cout << endl;
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
        obstacle2(); // the user is prompted
    }
    cout <<endl;
    return score;

}

int highScore() // this function is called if the user has a high score
{
    int choice;
    int score=0;
    abilityTwo=1; // the user gains another ability and the boolean variable is set to true. the ability is stored in a string variable
    cout << "you have a high score! you can now choose to get another special ability from a potion!" << endl;
    cout << "do you want the (1) ice potion or (2) stone shifting potion?" << endl;
    cin >> choice;
    cout << endl;
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
            highScore();
            break;
    }
    cout << endl;
    return score;
}
    
int lowScore() // this function is called if a user has a low score
    {
        int choice;
        int score=0;
        abilityTwo=0; // the user is not allowed to have a second special ability and the boolean variable is set to false.
        cout << "you have a low score! you can now choose to go through 1 of 3 mystery doorways in order to get a score increase and it might possibly be a shortcut too!" << endl;
        cout << "do you want to go through the (1) the blue door, (2) the green door or (3) the yellow door?" << endl;
        cin >> choice;
        cout << endl;
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
                lowScore();
                break;
                
        }
        cout << endl;
        return score;
}

int sixthChoice() // the user gets another random obstacle based on a randomly generated number
{
    int score=0;
    int value=randomGen();
    if (value%2==0) // if the random number is even, the user is sent to obstacle 3
    {
       score+=obstacle3();
    }
    else // if the random number is odd, the user is sent to obstacle 4
    {
        score+=obstacle4();
    }
    return score;
}

int obstacle3() // the user gets to eat a mystery sandwich
{
    int choice;
    int score=0;
    cout << "After walking for a while, you start to feel tired and look around for food. You see a wrapped sandwich lying on the ground, mysteriously " << endl;
    cout << " do you (1) ignore the sandwich and keep walking (2) eat the sandwich" << endl;
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you ignore the sandwich. better safe than sorry" << endl;
        score+=3;
    }
    else if (choice==2)
    {
        cout << "you eat the sandwich and feel less hungry, but it tastes pretty bad." <<endl;
        score+=1;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle3();
    }
    cout << endl;
    return score;
}

int obstacle4() // the user gets to eat a mystery drink
{
    int choice;
    int score=0;
    cout << "After walking for a while, you start to feel thirsty and look around for something to drink. You see a bottle lying on the ground, mysteriously " << endl;
    cout << " do you (1) ignore the bottle and keep walking (2) drink whatever is inside the mystery bottle" << endl;
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you ignore the bottle. better safe than sorry" << endl;
        score+=1;
    }
    else if (choice==2)
    {
        cout << "You drink from the bottle and it turns out to be clean, fresh water! you feel better now" <<endl;
        score+=3;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle4();
    }
    cout << endl;
    return score;
}

int seventhChoice() // the user gets to fight another monster
{
    int choice;
    int score=0;
    cout << "As you turn around another corridor, you hear the hiss of a snake! and it sounds like a big one!" << endl;
    cout<< "do you (1) run away in the opposite direction or (2) confront it?" << endl;
    cin >> choice;
    cout << endl;
    switch (choice){
        case 1:
            cout << "You immediately turn around and manage to run away from the snake!" << endl;
            return score+= 2;
            break;
        case 2:
            cout << "You stand your ground and decide to face the Snake" << endl;
            confront2(); // the user gets sent to the confront option
            return score += 5;
           break;
        default:
            cout << "You stand, frozen in fear and get bitten and struck down by the Snake! you die." << endl;
            exit(0);
            break;
    }
    cout << endl;
return score;
}

void confront2() // this function is called if the user chooses to confront and uses nested if loops to check what weapon or ability the user wants to choose
{
    int choice, subChoice;
    if (abilityOne==1 || abilityTwo==1){ // the loop begins if the user has atleast 1 special ability
        cout << "The snake is venomous and pretty fast! you can defeat it using your (1) special ability or (2) "<<weapon<< " ?"<<endl;
        cin >> choice;
        cout << endl;
        if (choice==1)
        {
            if (abilityOne==1 && abilityTwo==1) // if the user has both special abilities
                
            {
                cout << "would you like to use your (1) "<< ability1 <<" or (2) "<< ability2 <<"?"<<endl;
                cin >> subChoice;
                if (subChoice==1) // if the user chooses ability 1
                {
                    cout<<"You successfully strike down the snake with your " << ability1 <<"! well done!" << endl;
                }
                else if (subChoice==2) // if the user chooses ability 2
                {
                    cout <<"You successfully strike down the snake with your " << ability2<<"! well done!" <<endl;
                }
            }
            else if (abilityOne==1 && abilityTwo==0) // if the user only has the first ability
            {
                cout <<"You successfully strike down the snake with your "<<ability1<<"! well done!" <<endl;
            }
            else {
                cout <<"You successfully strike down the snake with your "<<ability2<<"! well done!" <<endl;
            }
        }
        
        else if (choice==2) // if the user chooses to use a special weapon
        {
            cout << "You successfully slay the hydra with your "<<weapon<< "! well done!" <<endl;
        }
    }
    else if (abilityOne==0 && abilityTwo==0) // if the user has no special abilities
    {
        cout << "You successfully slay the hydra with your "<<weapon<< "! well done!" <<endl;
        
    }
    
    else {
        cout<< "you need to make a decision quickly!" <<endl;
        confront2(); // the user is prompted to choose a weapon or ability
    }
    cout << endl;
}

int eightChoice() // user gets another random obstacle using generator
{
    int score=0;
    int value=randomGen();
    if (value%2==0) // if the random number is even, the user gets obstacle 5
    {
       score+=obstacle5();
    }
    else // if the number is odd, the user gets obstacle 6
    {
        score+=obstacle6();
    }
    return score;
    
}

int obstacle5() // the user gets to open a mystery bag
{
    int choice;
    int score=0;
    cout << "You suddenly trip on a bag laid on the ground!" << endl;
    cout << " do you (1) ignore the bag and keep walking (2) open the bag and see whats inside" << endl;
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you ignore the mystery bag. better safe than sorry" << endl;
        score+=3;
    }
    else if (choice==2)
    {
        cout << "you open the bag and find spider eggs! you drop the bag and walk away quickly" <<endl;
        score+=1;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle5();
    }
    cout << endl;
    return score;
    
}

int obstacle6() // the user gets to open a mystery box
{
    int choice;
    int score=0;
    cout << "You suddenly trip on a box laid on the ground!" << endl;
    cout << " do you (1) ignore the box and keep walking (2) open the box and see whats inside" << endl;
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "you ignore the mystery box. better safe than sorry" << endl;
        score+=1;
    }
    else if (choice==2)
    {
        cout << "you open the box and find a message from your friends! They are waiting for you outside the castle, if you can get to the exit." <<endl;
        score+=3;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        obstacle6();
    }
    cout << endl;
    return score;

}

int ninthChoice() // user gets to interact with a wizard
{
    int choice;
    int score=0;
    cout << "After walking through the castle for hours, you know you are near the end. Suddenly, you see a strange old man with a wizard cap. do you (1) approach him or (2) keep walking?" << endl;
    cin >> choice;
    cout << endl;
    if (choice==2)
    {
        cout << "you ignore the strange wizard, and keep walking. you are so close to the end now" << endl;
        score+=3;
    }
    else if (choice==1)
    {
        cout << "You approach the old Wizard. He tells you his name is Rokas, and warns you of a great monster guarding the exit of the castle. He wishes you luck." << endl;
         score +=5;
        
    }
    else {
        cout<< "You need to make a decision!" << endl;
        ninthChoice();
    }
    cout << endl;
    return score;
}

int tenthChoice() // final battle with monster
{
    int choice;
    int score=0;
    cout << "You suddenly see the castle exit, and run towards it! Before you can reach, a GIGANTIC spider blocks your path!" << endl;
    cout << "do you (1) run away from it or (2) confront it?" << endl;
    cin >> choice;
    cout << endl;
    if (choice==1)
    {
        cout << "You try to run away from the spider but it catches you with its web quickly! you die, so close to the end." << endl;
        exit(0); // the user dies and the program ends
    }
    else if (choice==2)
    {
        cout << "You decide to attack the huge spider. before you can even reach, the spider gets scared by you running towards it and scuttles away! you are free!" << endl;
        score+=5;
        
    }
    else {
        cout << "You need to pick an option." << endl;
        tenthChoice();
    }
    cout << endl;
    return score;
 
}
void endGame() // the user gets a final message if they manage to beat the game
{
    cout << "You have successfully gotten out of the castle and found your friends! well done on beating the game!" << endl;
    cout << endl;
}

