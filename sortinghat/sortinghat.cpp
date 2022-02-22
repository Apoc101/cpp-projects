#include <iostream>

int main() {
  //declare vars
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;

  int answer1, answer2, answer3, answer4;

  //title
  std::cout << "The sorting hat quiz!\n\n";

  //first question
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n\n  ";
  std::cin >> answer1;
  std::cout << "\n";

  switch(answer1){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.";
      break;
  }

  //second question
  std::cout << "Q2) Dawn or Dusk?\n\n  1) Dawn\n  2) Dusk\n\n  ";
  std::cin >> answer2;
  std::cout << "\n";

  switch(answer2){
    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      gryffindor++;
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input.";
      break;
  }

  //third question
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n  1) The violin\n  2) The trumpet\n  3) The piano\n  4) The drum\n\n  ";
  std::cin >> answer3;
  std::cout << "\n";
  switch(answer3){
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.";
      break;
  }

  //fourth question
  std::cout << "Q4) Which road tempts you most? \n\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit alley\n  3) The twisting, leaf-strewn path through the woods\n  4) The cobbled street line (ancient buildings)\n\n  ";
  std::cin >> answer4;
  std::cout << "\n";

  switch(answer4){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input.";
      break;
  }

  //find highest answer with a hash table
  int max = 0;
  std::string house;

  if(gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if(hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if(ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if(slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }


  //ouput house
  std::cout << house << "!\n";


}