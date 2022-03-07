#include <iostream>

// Story game

/*

  Notes:
      - I set all the char variables default to 'y' becaues otherwise loops will be infinite and it won't load on my compiler

      - I use single quotes for comparisons, otherwise it takes it as a string literal

      - This is (quite obviously) inspired by a game called Destiny: https://www.bungie.net/
  
*/

int main() {
  //introduction
  std::cout << "It begins...\n\n";
  
  //initial part
  std::cout << "You're in the middle of an abandoned city in Ukraine, you find yourself gasping for air as you open you eyes for the first time in what feels like centuries. You look up, the sun partially blinding you, and you hear a voice that says 'Wake up Guardian, it's time to go.'\n";
  
  //choice
  char c1 = 'y';
  std::cout << "Do you follow the faint voice? y/n ";
  std::cin >> c1;

  //loop 1
  while(c1 != 'y' && c1 != 'n'){
    std::cout << "\nTry again. y/n ";
    std::cin >> c1;
  } 

  //conditional 1
  if(c1 == 'n'){
    std::cout << "\nYou stay exactly where you are, and then feel your life drain out of you as the voice gets increasingly hard to hear. You then fall into another infinite sleep.\n\nThe end!\nThis was ending 1.\n";
  }
  else if(c1 == 'y'){
    std::cout << "\nYou try to get up, and get to stretch your legs after so many years. You finally see where the voice was coming from: there's a small robot with what looks like an eye, staring at you and telling you to follow him, otherwise you will meet your doom.\n";
    std::cout << "You ask him what he is, and he simply responds with: 'A ghost.'\nHe then tells you to grab an old Golden-Age gun that's lying on a box, and to go down a hallway inside a building that's nearby.\nYou follow his instructions, and suddenly something jumps in front of you!\n";

    //choice 2
    char c2 = 'y';
    std::cout << "Do you shoot at it? y/n ";
    std::cin >> c2;

    //loop 2
    while(c2 != 'y' && c2 != 'n'){
      std::cout << "\nTry again. y/n ";
      std::cin >> c2;
    }

    //conditional 2
    if(c2 == 'n'){
      std::cout << "\nYou were too late, and the being that appeared in front of you stabs you with an electrically-charged knife, and taunts you as you die without your 'ghost'.\nThe end!\nThis was ending 2.\n";
    }
    else if(c2 == 'y'){
      std::cout << "\nYou suddenly shoot at it with your old assault rifle, and the being falls to the floor as it dies. The ghost catches up with you and says 'wow, I'm surprised that 2056 Kvhostov still works. Well, let's keep going.'\n";
      std::cout << "You walk about 10 miles, your legs never getting tired, as you discover your various abilities given to you by the Light, provided by an entity called 'The Traveller'. You stop at a building where there's supposed to be an old Golden-Age ship which the ghost might be able to jumpstart.\nWhen you arrive, there's an alien-looking being that the ghost describes as a 'Fallen'. Do you shoot at it? y/n ";

      //choice 3
      char c3 = 'y';
      std::cin >> c3;

      //loop 3
      while(c3 != 'y' && c3 != 'n'){
        std::cout << "\nTry again. y/n ";
        std::cin >> c3;
      }

      //conditional 3
      if(c3 == 'y'){
        std::cout << "\nYou shoot at the 'Fallen' Captain, and it barely does a scratch. He takes out a shrapnel launcher and instantly shreds you. Your Light is still too weak and the ghost isn't able to revive you.\nThe end!\nThis was ending 3.\n";
      }
      else if(c3 == 'n'){
        std::cout << "\nIt was the right choice, since you see the Captain replace an Ion battery inside the ship and then walk away to alert his crew. You're able to sneak past him and warp into the ship to start the jump drive before he's able to reach you.\nThe ghost says 'Next destination: The Tower.'\n\n";
      }
    }
  }
    std::cout << "Become Legend.";

}