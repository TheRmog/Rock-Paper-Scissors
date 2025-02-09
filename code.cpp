#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
  char player, computer;
  player = getUserChoice();
  cout << "Your choice: ";
  showChoice(player);
  computer = getComputerChoice();
  cout << "computer choice: ";
  showChoice(computer);
  chooseWinner(player, computer);
  return 0;
}
char getUserChoice(){
  char player;
  cout << "Rock-Paper-Scissors Game!\n";
  do {
    cout <<"Choose one of the following\n";
    cout << "'r' for Rock\n";
    cout << "'s' for Scissors\n";
    cout << "'p' for Paper\n";
    cout << ">>>  ";
    cin >> player;
  }
  while(player != 'r' && player != 's' && player != 'p');
  return player;
}
char getComputerChoice(){
  srand(time(0));
  switch(int randomNumber = rand() % 3 + 1) {
    case 1:return 'r';
    break;
    case 2:return 's';
    break;
    case 3:return 'p';
    break;
  }
  return 0;
}
void showChoice(char choice){
  switch(choice) {
    case 'r': cout << "Rock\n";
      break;
    case 's': cout << "Scissors\n";
      break;
    case 'p': cout << "Paper\n";
      break;
  }
}
void chooseWinner(char player, char computer){
  switch(player) {
    case 'r': if(computer == 'r') {
      cout << "It 's a tie!\n";
    }
    else if(computer == 'p') {
      cout << "You lose!\n";
    }
    else {
      cout << "You win!\n";
    }
    break;
    case 's': if(computer == 's') {
      cout << "It is a tie!\n";
    }
    else if(computer == 'p') {
      cout << "You win!\n";
    }
    else {
      cout << "You lose!\n";
    }
    break;
    case 'p': if(computer == 'p') {
      cout << "It is a tie\n";
    }
    else if  (computer == 'r') {
      cout << "You lose!\n";
    }
    else {
      cout << "You win!\n";
    }
    break;
  }


}
