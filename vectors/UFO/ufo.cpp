#include <iostream>
#include <vector>
#include <string>
#include "ufo_functions.hpp"

int main() {

  //greeting 
  greet();

  //guessing variables
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  //conditional to check if misses below 7, or if user didn't win

  //this is the entire program, only functioning while the game isn't won and there aren't enough failing misses
  while(answer != codeword && misses < 7){
    display_misses(misses);  //print the misses each time
    display_status(incorrect, answer); //print the display (pretty much the HUD)
    std::cout << "Please enter your guess: "; //user input
    std::cin >> letter;
    for(int i = 0; i < codeword.length(); i++){
      if(letter == codeword[i]) { //check if user was right
        answer[i] = letter;
        guess = true;
      }
    }
    if(guess) {  //check if the attempt is correct
      std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    } else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  //check if user won
  end_game(answer, codeword);

}
