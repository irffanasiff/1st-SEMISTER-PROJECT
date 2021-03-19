#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>



//colours
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

//gloabal variables for TIC TAC TOE
char box[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //doubt why an arry OF 10 AND NOT 9
//functions declaration FOR TIC TAC TOE
int result();
void playingArea();

//functions declaration FOR DIE ROLL
int roll_die();
int main();

//functions declaration for LOTTERY GAME


int main()
{   start1:
    system("cls");
    //WELCOME PAGE
    printf("*Welcome to RAIN and ALLADINS'S* \n     Dark stdio of games \a ");//add color
    printf("\n\n       GAMES WE OFFER  ");
    printf("\n\n       %s1:TIK TAC TOE\n       %s2:DIE ROLL \n       %s3:LOTTERY%s\n", KYEL, KGRN, KCYN, KNRM);
    printf("\n_Chose the game you want to play_\n\n ");
   
    printf("  %sPRESS 1 FOR TIC TAC TOE\n", KYEL);
    printf("   %sPRESS 2 FOR DIE ROLL\n", KGRN);
    printf("   %sPRESS 3 FOR LOTTERY\n", KCYN);
    printf("   %sPRESS 4 TO EXIT\n", KBLU);
    start:
    printf("%s\nEnter your response here --> ", KWHT);
    int gameChoice;
    scanf("%d", &gameChoice);

 
 
 
 
if(gameChoice == 1)
    {
       system("cls");
       printf("      %s*Welcome to TIC TAC TOE* ", KYEL);
 
 
 
 
 
       // TIC TAC TOE GAME CODE
           int player = 1, i, numberEntered;
    char mark; //X,O
    do  //this loop will run until the value of i == -1
    {
        playingArea();     //draws playingArea
        player = (player % 2) ? 1 : 2;  //if the value of  the player divided by 2 is 0 or not. if the value of plauer%2 is 1 it will return 1 else 2/
        printf("%sPlayer %d, enter a number:  ",KGRN, player);
        scanf("%d", &numberEntered);
       if (player == 1)
        mark= 'X';
       else
        mark= 'O';
        //on player 1 turn board will be yellow and on player 2 turn board will be magenta
       if (player == 1)
          printf("%s", KYEL);
       else    
            printf("%s", KMAG);
        if (numberEntered == 1 && box[1] == '1')
            box[1] = mark;
            
        else if (numberEntered == 2 && box[2] == '2')
            box[2] = mark;
            
        else if (numberEntered == 3 && box[3] == '3')
            box[3] = mark;
            
        else if (numberEntered == 4 && box[4] == '4')
            box[4] = mark;
            
        else if (numberEntered == 5 && box[5] == '5')
            box[5] = mark;
            
        else if (numberEntered == 6 && box[6] == '6')
            box[6] = mark;
            
        else if (numberEntered == 7 && box[7] == '7')
            box[7] = mark;
            
        else if (numberEntered == 8 && box[8] == '8')
            box[8] = mark;
            
        else if (numberEntered == 9 && box[9] == '9')
            box[9] = mark;
            
        else //this will work only if the entered number is greater than 9
        {
            printf("Invalid move ");

            player--; //decremented the value of the player.If player 1 enters an invalid option the player 1 will get one more chance using player ++/
            getch(); //press any button on keybord to enter again 
        }
        i = result(); //it will check for win  or loose or dra,ṁw
        player++;//this will increase the players number only if the i==result() is false and start the loop again
        
    }while (i ==  - 1);
    
    playingArea();
    
    if (i == 1)
        printf("  \a%sPlayer %d win ", KYEL, --player);//because in above loop value of player has increased
    else
        printf("  \a%sGame draw", KYEL);
    printf("\nPRESS ENTER TO GO BACK");
    getch();
    goto start1;
    }
else if( gameChoice == 2)
    {   
         system("cls");
         printf("        %s*Welcome to DIE ROLL* \n\n", KGRN);
         
         
         
         
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
            printf("\n   ENTER THE NUMBER :");
            scanf("%d",&choice);
            switch(choice)
            {   case 1:
                num1=roll_die();
                printf("\n%s   YOU GOT: %d", KYEL ,num1);
                break;
                case 2:
                num2=roll_die();
                printf("\n   YOU GOT: %d",num2);
                break;
                case 3:
                printf("%s   exiting ...%s", KRED, KNRM);
                exit(1);
                default:
                printf("invalid choice.\n\n");
                continue;

            }
            if(num1==6)
            {
                printf("\n\n   %splayer 1 !wins", KMAG);
                goto end;
            }
            else if (num2==6)
            {
                printf("\n   %splayer 2 wins ", KMAG);
                goto end;
            }
            else
                continue;
         }
        end:
        printf("\n\n  %sGAME END!!!!", KCYN);
        return 0;
    }
        else if(choose==2)
          {
        printf("%s", KMAG);
        printf("  PLAYER VS COMPUTER\n ");
        while(1){
            printf("\n%sEnter %s3%s for your turn: ", KNRM, KYEL, KNRM);
            scanf("%d",&choice);
            num1=roll_die();
            printf("\n  YOU GOT: %d",num1);
            num2=roll_die();
            while (1)
            {if (num1==num2)
            num2= roll_die();
             else 
                break;
            }
            printf("\n\n%sComputers turn and it's value: %d%s\n",KGRN, num2, KNRM);
            if(num1==6)
            {
                printf("\n  YOU WON");
                goto end1;
            }
            else if(num2==6)
            {
                printf("\n computer wins ");
                goto end1;
            }
            else
                continue;
        }
        end1:
        printf("\n%s GAME ENDS!!!!%s", KRED, KNRM);
      
    } 
        printf("\nPRESS ENTER TO GO BACK");
        getch();
        goto start1;
    }
else if( gameChoice == 3)  
    {
           char word[30]; //Defining character array(string), with max length 30

       printf("%s=============== LAXMI CHIT FUND (21 DINMA PAISA DOUBLE) ===============\n %s YOUR MONEY IS ADDED TO THE LOCKER VISIT AFTER 21 DAYS\n\n           Enter your lockers new code: %s", KMAG, KYEL, KNRM);
       scanf("%s",word);

       int len=strlen(word); //Storing the length of word by OWNER in len variable
       int i,j;
       int check[30]; //check each string "word" position against the VISITER input
       for(i=0;i<30;i++)
            {
            check[i]=0;
            } //Filling Check with all zeroes, so that later on we can put and sum the scores.


      char user_char; //character given by VISITER
      system("cls");// Clearing the terminal, so VISITER can't see the words given by OWNER
      
      for(i=0;i<len;i++)
      {
         printf("===== WELCOME AFTER 21 DAYS. VISITOR ENTER THE CODE TO WITHDRAW =====\n\n%sLENGTH OF YOUR PASSWORD IS %d CHARACTERS%s \n",KRED,len, KNRM);
         printf("\n\n %sVISITER : ENTER ANY CHARACTER OF YOUR CODE%s", KGRN, KNRM);
         scanf(" %c",&user_char);
         for(j=0;j<len;j++)
        {
          if(word[j]==user_char && check[j]==0)
          {
           check[j]=1;
           break;
          }
        }
         system("cls");
       }
      
     
     int points=0;
     for(i=0;i<30;i++)
        {
         points+=check[i];
        }

     if (points==len)
        {
         printf("\a*ACCESS GRANTED*");
         printf("\n\n%sTAKE YOUR MONEY%s\n",KMAG, KNRM);
        }

     else if(points<len && points>0)
        {
        printf("%sACCESS DENIED%s", KRED,KNRM);
        printf("\n\nVISITER GOT %d WORDS CORRECT FROM %d\n\nCOME BACK AFTER 21 DAYS",points,len);
        }
      else 
       {
        printf("\n\n%s    WRONG PASSWORD%s\n\n    ACCESS DENIED\n\nYOUR MONEY IS SAFE WITH US ", KRED, KNRM);
       }
     printf("\nPRESS ENTER TO GO BACK");
     getch();
     goto start1;

    }
else  
    {
        printf("EXITTING\n");
    }


}

int result()
{
    if (box[1] == box[2] && box[2] == box[3])
        return 1; //1 for win ( loop ends )
        
    else if (box[4] == box[5] && box[5] == box[6])
        return 1;
        
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;
        
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
        
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
        
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;
        
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;
        
    else if (box[3] == box[5] && box[5] == box[7])
        return 1; 
        
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
        return 0; /* 0 for game draw. Logic if all of the boxes are filled with either of the two 0 or X then the game is over and no on has won it but all the boxes will be full and box 9 will not be equal to 9 and box 8 will not b equal to 8 and hence the game will be declar3ed as a draw*/
    else
        return  -1; //-1 is for repeating to loop
}

//FUNCTIONS FOR TIC TAC TOE GAME
void playingArea()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n" );

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    
    printf("%s     %c     %c     \n", KWHT, 186, 186);
    printf("  %c  %c  %c  %c  %c \n", box[1], 186, box[2], 186, box[3]);

    printf("_____%c_____%c____\n", 186, 186);
    printf("     %c     %c     \n", 186, 186);
   
   

    printf("  %c  %c  %c  %c  %c \n", box[4], 186, box[5], 186, box[6]);

    printf("_____%c_____%c____\n", 186, 186);
    printf("     %c     %c     \n", 186, 186);

    printf("  %c  %c  %c  %c  %c \n", box[7], 186, box[8], 186, box[9]);
    
    printf("     %c     %c     \n", 186, 186);
    printf("\n");
   
}
// DIE ROLL FUNCTIONS
int roll_die() // this function return a random number each time it is called between 1 and 6
{
    srand(time(NULL));
    int roll= 1+rand()%6;
    return roll;
}
