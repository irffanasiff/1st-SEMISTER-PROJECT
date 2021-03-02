# 1st-SEMISTER-PROJECT
## Developing a gaming console in C.

    This is a simple game console made using C language. By Irfan Asif (2020BECE060) and Ankur Narwade (2020BECE087). 

## About The Project.

    We offer 3 game for the palyers, We offer multiplayer games where the palyer can chose to play again other players or Computer. 

   Games we offer :-

1. TIC TAC TOE
2. DIE ROLL
3. LOTTERY GAME

## Code Example.

```c
// code for DIE ROLL game
         int num1=0,num2=0,choice=0,choose=0;
         printf("           %s*Dice Roll Game*\n%s-The first player to get a 6 wins the game- \n", KMAG, KWHT);
         printf("\n%s   Press 1 to play against player \n   %sPress 2 to play against computer\n              ", KYEL, KBLU);
         scanf("%d",&choose);
        if(choose==1)
          {
           printf("       %s*player vs player*\n ", KWHT);
           printf("  %srolling the die...\n",KCYN);
           printf("   %spress 1 for player 1's turn\n", KWHT);
           printf("   press 2 for player 2's turn \n");
           printf("%s   press 3 for exit.\n", KRED);
           printf("%s", KNRM);
         while(1)
         {
```

  

## Libraries Included.

1. `#include <stdio.h>`  This library Includes the standard functions of c language like `printf()`, `scanf()`, `main()` elc.
2. `#include <stdlib.h>`   This library includes functions involving memory allocation like `malloc`,  `calloc` etc. and `rand()` function.
3. `#include <conio.h>`  This header file contains functions like `putch` , `getch` , `clrscr` (clearing the screen) etc.
4. `#include <time.h>` This header file contains definitions of functions to get and manipulate date and time information.
5. `#include <string.h>` This library contains functions used for manipulating arrays of characters eg:`strlen().`

## How does the Game Work.🔥

     # After compiling the code the user will be welcomed with welcome screen. The welcome screen contains option for playing different games. User will have to press 1, 2 or 3 to chose between the games and to exit the console he will be pressing 4.

    **How to play the first game.**

In Tic Tac Toe game two players have to play. Player one will be assigned 'X' and palyer Two will be assigned the 'O' symbol. Now turn wise the players will enter the box number where they have to fill their corresponding signs.The first player to get three same symbols in a line will win the game. After that the player will get options either to play again or exit the game.

     **How to play the Second game.**

The second game is the die roll game, where the player to get 6 on the die first wins the game. This game console provides the players options to either play with another player or play with computer. After choosing the oponent the games start with asking the players to choose who wants to roll the die first. The players at their turn will haveto press the corresponding buttons shown on the console to roll the die or exit. After the results the player will be asked to return to main page or exit the game.

     **How to play the Second game.**

The third game is a virtual locker, where the player will have to enter his code and the nexxt palyer will have to guess the code's character in any order to win the game. When the game starts the console will ask the user to put his code for the first time, once the code is entered it will get saved and will dissapear from the console. After that the next player has to enter the characters one by one and press enter after every time he guess a character. If he guess all the characters, he gets access to the locker.

## Refrences

[StackOverflow](https://stackoverflow.com/questions/15102976/how-to-clear-screen-from-simple-c-program)

[StackOverflow for Colours](https://stackoverflow.com/questions/3585846/color-text-in-terminal-applications-in-unix)

[Codewithc](https://www.codewithc.com/mini-project-in-c-tic-tac-toe-game/)
