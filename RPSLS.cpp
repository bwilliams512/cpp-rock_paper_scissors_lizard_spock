/*
This is a rock_paper_scissors type program that:

- Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
- Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
- Compares the user’s choice and the computer’s choice and determine the winner.
- Informs the user who the winner is.
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
 
  int computer = rand() % 5 + 1;
 
  int user = 0;  

  std::cout << "================================\n";
  std::cout << "Rock Paper Scissors Lizard Spock\n";
  std::cout << "================================\n";
 
  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";
 
  std::cout << "Enter your selection: ";

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
  // Get user input
  std::cin >> user;

  // Use conditionals & logic to determine the winner

  /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */
  
  std::cout << "Computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
      
    std::cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
      
    std::cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
      
    std::cout << "Tie!\n";
      
  } else {
      
    std::cout << "You Lose!\n";
      
  }
 
}
