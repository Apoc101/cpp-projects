#include <iostream>
#include <vector>
#include <string>

int main() {
  //declare string and vectors
  std::string input = "turpentine and turtles";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  //loop the size of the input string
  for(int i = 0; i < input.size(); i++){

    //nested, loop the size of the vowels vector
    for(int b = 0; b < vowels.size(); b++){

      //check if input at index of superloop contains a vowel
      if(input[i] == vowels[b]){
        result.push_back(input[i]); //add the vowel to the result vector

      }

    }
    //add 'e' and 'u' twice if it exists already (whales double 'e's and 'u's)
    if(input[i] == 'e' || input[i] == 'u'){

      result.push_back(input[i]);

    }

  }

  //output each char in result
  for(int c=0; c<result.size(); c++){

    std::cout << result[c];

  }

  //newline (duh)
  std::cout << "\n";

}