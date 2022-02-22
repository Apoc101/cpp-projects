/*
  Rock paper scissors lizard spock,
  inspired by the Big Bang Theory
*/

#include <iostream>
#include <stdlib.h>

int main() {
  //declare variables

    //no influence on number generation
    srand (time(NULL));

    //generates a number that could be 1, 2, 3, 4 or 5
    //the +1 is there for better output instead of 0, 1, 2 etc
    int computer = rand() % 5 + 1;

  int user = 0;

  //fancy output
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";
  
  std::cout << "shoot! ";
  std::cin >> user;

  std::cout << "Computer: " << computer << "\n";

  //visualization for the variables, you don't have to do it like this but I do it because I like programming visually a lot more
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
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

  if(user == rock && computer == scissors) {
    std::cout << "You win!\n";
  }
  else if(user == scissors && computer == paper) {
    std::cout << "You win!\n";
  }
  else if(user == paper && computer == rock) {
    std::cout << "You win!\n";
  }
  else if(user == lizard && computer == spock) {
    std::cout << "You win!\n";
  }
  else if(user == spock && computer == scissors) {
    std::cout << "You win!\n";
  }
  else if(user == scissors && computer == lizard) {
    std::cout << "You win!\n";
  }
  else if(user == lizard && computer == paper) {
    std::cout << "You win!\n";
  }
  else if(user == paper && computer == spock) {
    std::cout << "You win!\n";
  }
  else if(user == spock && computer == rock) {
    std::cout << "You win!\n";
  }
  else if(user == rock && computer == lizard) {
    std::cout << "You win!\n";
  }
  else if(user == computer){
    std::cout << "You tie!\n";
  }
  else {
    std::cout << "You lose :(\n";
  }

}