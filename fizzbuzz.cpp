/*This C++ program is a straightforward implementation of the "FizzBuzz" game, designed to print "Fizz" for numbers divisible by 3, "Buzz" for numbers divisible by 5, "FizzBuzz" for numbers divisible by both 3 and 5, and the number itself for all other numbers, from 1 to 100. 
It showcases basic programming concepts such as loops (for iterating through numbers 1 to 100), conditionals (to apply the game's rules), the modulus operator (for checking divisibility), and outputting results to the console.*/


#include <iostream>

int main () 
{
  // Brain explodes here:
  for (int i = 1; i <= 100; i++)
  {
    
    if (i % 3 == 0 && i % 5 == 0)
    {
      std::cout << "FizzBuzz\n";
    }
    else if (i % 3 == 0)
    {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0) 
    {
      std::cout << "Buzz\n";
    }
    else 
      std::cout << i << "\n";

  }
  return 0;
}
