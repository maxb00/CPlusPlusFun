#include <iostream>
#include <ctime>
#include <string>
#include <random>

using namespace std;

int main()
{
  int sides;
  bool run = true;
  bool answering;
  char again;

  mt19937 randomGenerator (time(0));
  
  cout << "Welcome!\n\n";
  while(run){
    cout << "How many sides?" << endl;
    cin >> sides;
  
    uniform_int_distribution<int> diceRoll(1, sides);
  
    cout << "You rolled a " << diceRoll(randomGenerator) << endl;
    answering = true;
    while(answering){
        cout << "Roll again? (y or n)\n";
        cin >> again;
        if(again == 'n'){
            run = false;
            answering = false;
        }else if(again == 'y'){
            run == true;
            answering = false;
        }else{
            cout << "Yes (y) or no (n)?";
        }
    }
  }
}
