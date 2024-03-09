// This program prompts the user to enter 3 different currencies and converts them to dollars
#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  double pesos2USD = 0.00026;
  double reais2USD = 0.20;
  double soles2USD = 0.27;

  dollars = pesos2USD * pesos + reais2USD * reais + soles2USD * soles; // total of all entered currencies will be added in dollars

  std::cout << "US Dollars = $ " << dollars << "\n";

}
