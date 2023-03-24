#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);


int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice is: ";
    showChoice(computer);

    showWinner(player, computer);


    return 0;
}


char getUserChoice() {

        char player; 
        std::cout << "Rock-Scissors-Paper!\n";

    do {
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
       

    } while (player != 'r' && player != 'p' && player !='s');
    
    return player;
    
}

char getComputerChoice() {

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num) {
        case 1: return 'r';

        case 2: return 'p';

         case 3: return 's';
    }

    return 0;
}

void showChoice(char choice) {
     
    switch (choice) {
        case 'r': 
            std::cout << "Rock\n";
            break;

        case 'p': 
            std::cout << "Paper\n";
            break; 

        case 's': 
            std::cout << "Scissor\n";
            break;
    }

}

void showWinner(char player, char computer) {

    switch (player) {
        case 'r':   if(computer == 'r') {
                        std::cout << "It's a tie!";
                    }
                    else if(computer == 'p'){
                        std::cout << "You lose!";
                    }
                    else{
                        std::cout << "You win";
                    }
        case 's':   if(computer == 'r') {
                        std::cout << "You lose!";
                    }
                    else if(computer == 'p'){
                        std::cout << "You win!";
                    }
                    else{
                        std::cout << "It's a  tie!";
                    }
                    
        case 'p':   if(computer == 'r') {
                        std::cout << "You win!";
                    }
                    else if(computer == 'p'){
                        std::cout << "It's a tie!";
                    }
                    else{
                        std::cout << "You lose!";
                    }
                    
    }
    

}