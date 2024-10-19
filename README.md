# CHOOSE YOUR OWN ADVENTURE GAME

## Overview

Welcome to the Choose Your Own Adventure Game! This game immerses players in a dungeons-and-dragons inspired narrative where they make choices that influence the outcome of the story. Navigate through various scenarios, overcome obstacles, and experience multiple endings based on your decisions.

## Table of Contents

- [Game Functions](#game-functions)
- [Installation](#installation)
- [Demo](#demo)
- [License](#license)

## Game Functions

The game consists of several key functions:

- **`void startGame()`**: Initializes the game and sets the stage for the adventure, presents the user with a starting screen message

- **`int firstChoice()`, `secondChoice()`, `thirdChoice()`, `fourthChoice()`, `fifthChoice()`, `sixthChoice()`, `seventhChoice()`, `eighthChoice()`, `ninthChoice()`, `tenthChoice()`**: A series of choices that guide the player through various scenarios.
 
- **`int rand()`**: Generates random numbers to give a randomized path of obstacles the player can experience, so each player has a unique experience.
  
- **`int forestChoice()`**: Decides the player's path if they decide to explore the forest.
- **`int stayChoice()`**: Determines if the player's path if they decide to stay in their current location.

- **`void doorwayChoice()`**: Presents the player with the choice to explore a doorway, where they get the option to get their first special ability.
- **`void confront1()`**: The first confrontation with a monster, where the user can defeat with a special ability or weapon.
- **`void confront2()`**: The second confrontation with a monster, escalating the tension.

- **`int obstacle1()`, `obstacle2()`, `obstacle3()`, `obstacle4()`, `obstacle5()`, `obstacle6()`**: Functions representing various obstacles the player must overcome, which are randomly given based on the outcome of the random number generator.
  
- **`int lowScore()`**: A skill check for the player which allows them to raise their score if it is low.
- **`int highScore()`**: A skill check for the player which allows them to get another special ability if they already have a high score.
  
- **`void endGame()`**: Concludes the game, displays the final score of the player
- 

The game utilizes boolean string variables to track player decisions, weapons and abilities, and the state of the narrative, enhancing interactivity and replayability.


## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/maya-nachiappan/choose-your-own-adventure-game.git


## Demo

<img width="1423" alt="Screenshot 2024-10-02 at 11 55 57 PM" src="https://github.com/user-attachments/assets/c4358a9f-da87-4618-81a3-dc55088167a5">
[Watch the explanation here](https://drive.google.com/file/d/1oJ4b7X8vRm5rPL3afphatCDYdzfBIXOa/view?usp=sharing)
