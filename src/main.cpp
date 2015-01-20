#include <iostream>
#include <ctime>
#include <string>
#include <random>

using namespace std;

int main()
{
  int sides;

  mt19937 randomGenerator (time(0));
  
  cout << "Welcome!\n\n How many sides?" << endl;
  cin >> sides
  
  uniform_int_distribution diceRoll(1, sides);
  
  cout << "You rolled a " << diceRoll(randomGenerator) << endl;
}
