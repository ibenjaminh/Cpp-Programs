/*  a quiz that emulates the Hogwarts Sorting Hat from the Harry Potter series. It asks the user a series of questions and assigns points to Gryffindor, Hufflepuff, Ravenclaw, or Slytherin based on their answers.
Finally, it determines which house has the most points and assigns the user to that house. 
The program showcases handling user input, conditional logic, and basic arithmetic operations to track and compare scores, illustrating fundamental concepts in programming such as variables, conditionals, and input/output operations.*/

#include <iostream>

int main()
{
  // The magic starts here
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n\n";

  std::cin >> answer1;

  if (answer1 == 1)
  {
    hufflepuff += 1;
  }
  else if (answer1 == 2)
  {
    slytherin += 1;
  }
  else if (answer1 == 3)
  {
    ravenclaw += 1;
  }
  else if (answer1 == 4)
  {
    gryffindor += 1;
  }
  else
  {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cin >> answer2;

  if (answer2 == 1)
  {
    gryffindor += 1;
    ravenclaw += 1;
  }
  else if (answer2 == 2)
  {
    hufflepuff += 1;
    slytherin += 1;
  }
  else
  {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n\n";

  std::cin >> answer3;

  if (answer3 == 1)
  {
    slytherin += 1;
  }
  else if (answer3 == 2)
  {
    hufflepuff += 1;
  }
  else if (answer3 == 3)
  {
    ravenclaw += 1;
  }
  else if (answer3 == 4)
  {
    gryffindor += 1;
  }
  else
  {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, lead-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n";

  std::cin >> answer4;

  if (answer4 == 1)
  {
    hufflepuff += 1;
  }
  else if (answer4 == 2)
  {
    slytherin += 1;
  }
  else if (answer4 == 3)
  {
    gryffindor += 1;
  }
  else if (answer4 == 4)
  {
    ravenclaw += 1;
  }
  else
  {
    std::cout << "Invalid input";
  }

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin";
  }
  std::cout << house << "!\n";

}
