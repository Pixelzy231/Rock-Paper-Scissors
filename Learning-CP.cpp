#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    
    player = getUserChoice();
     
    std::cout << "Your Move: ";

    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);



 return 0;
}

char getUserChoice(){

    char player;

    do {
        std::cout << "Welcome to RPS!\n";
        std::cout << "///////////////\n";
        std::cout << "Choose Your Move!\n";
        std::cout << "///////////////\n";
        std::cout << "'r' for rock!\n";
        std::cout << "'p' for paper!\n";
        std::cout << "'s' for scissors!\n";
        std::cin >> player;

    }
    while(player != 'r' && player != 's' && player != 'p');
    

    
   
    return player;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {  case 1: return 'r';
         break;
       case 2: return 's';
         break;
       case 3: return 'p';
         break;

    
    }

    return 0;
}
void showChoice(char choice){
    switch (choice){
        case 'r':

           std::cout << "Rock!\n";

               break;
         
        case 's':
        
           std::cout << "Scissors!\n";

               break;
          
        case 'p':

           std::cout << "Paper!\n";

               break;


    }
    

}
void chooseWinner(char player, char computer){
    
    switch (player){

       case 'r':  if(computer == 'r'){
                  std::cout << "Its a Tie!";
                  }
                    
                  else if(computer == 's'){
                   std::cout << "You Win!";
                }

                else
                std::cout << "You Lose!";

                break;
       case 'p':  if(computer == 'p'){
                  std::cout << "Its a Tie!";
                  }
                    
                  else if(computer == 'r'){
                   std::cout << "You Win!";
                }

                else
                std::cout << "You Lose!";

                break;

       case 's':  if(computer == 's'){
                  std::cout << "Its a Tie!";
                  }
                    
                  else if(computer == 'p'){
                   std::cout << "You Win!";
                }

                else
                std::cout << "You Lose!";

                break;
       
       
    }

}