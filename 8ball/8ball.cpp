#include <iostream>
#include <cstdlib>

int main() {
  //title output
  std::cout << "MAGIC 8-BALL:\n\n";

  //sets the seed to check for no influence in the generation of the number
  srand(time(NULL));

  //declare random variable
  int ball = std::rand() % 10;

  switch(ball){
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "Very doubtful.\n";
      break;
    case 2:
      std::cout << "No.\n";
      break;
    case 3:
      std::cout << "Well of course!\n";
      break;
    case 4:
      std::cout << "Probably not, but it's worth a try.\n";
      break;
    case 5:
      std::cout << "Maybe!\n";
      break;
    case 6:
      std::cout << "Probably!\n";
      break;
    case 7: 
      std::cout << "No.\n";
      break;
    case 8:
      std::cout << "Never.\n";
      break;
    default: 
      std::cout << "Something broke! Try relaunching the program.\n";
  }
}