#include <iostream>
#include <ctime>
#include <string>
#include <random>

using namespace std;

int main()
{
  char sides;
  bool run = true;
  bool answering;
  char again;

  mt19937 randomGenerator (time(0));
  
  cout << "Welcome!\n\n";
  while(run){
    cout << "Heads or tails? (h or t)" << endl;
    cin >> sides;
  
    uniform_real_distribution<float> coinFlip(0.0f, 1.0f);
    float result = coinFlip(randomGenerator);
  
    
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
