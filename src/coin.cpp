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
  char ht;

  mt19937 randomGenerator (time(0));
  
  cout << "Welcome!\n\n";
  while(run){
    cout << "Heads or tails? (h or t)" << endl;
    cin >> sides;
  
    uniform_real_distribution<float> coinFlip(0.0f, 1.0f);
    float result = coinFlip(randomGenerator);
  
    if((result >= 0.5f) && (sides == 'h')){
        cout << "Heads! You win!" << endl;
    }else if((result >= 0.5f) && (sides == 't')){
        cout << "Heads! You lose!" << endl;
    }else if((result < 0.5f) && (sides == 't')){
        cout << "Tails! You win!" << endl;
    }else if((result < 0.5f) && (sides == 'h')){
        cout << "Tails! You lose!" << endl;
    }else{
        cout << "Something's gone wrong!\n";
        run = false;
    }
    answering = true;
    while(answering){
        cout << "Flip again? (y or n)\n";
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
  return 0;
}
