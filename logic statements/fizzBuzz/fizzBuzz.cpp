//
//      This is an easy one, just for loop syntax and to lean the "FizzBuzz" interview question logic
//

#include <iostream>

int main() {
  for(int i = 1; i < 100; i++) {   // don't start with i=0 because that's a mathematical error, and it don't use exception handling
    std::cout << i;
    if(i % 3 == 0){   // check if i is evenly divisible by 3
      std::cout << " Fizz";
    }
    if(i % 5 == 0){   // check if i is evenly divisible by 5
      std::cout << " Buzz";
    }
    std::cout << "\n";
  }

}
