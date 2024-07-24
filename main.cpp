#include <iostream>

#include "module/calc.h"

using namespace std;
using namespace calculator;

void startCalc(Calculator);
bool runCalc(Calculator);

int main() {
  cout << "This is a scientific calculator!\n";
  Calculator calc, calc1;
  calc1.setExpression("1 + 2 * 3");
  calc1.printexp();
  startCalc(calc);
}

void startCalc(Calculator calc){
  cout << "Welcome to the calculator"<<endl;
  bool running = true;
  while(running){
    running = runCalc(calc);
  }
  cout<<endl<<"thanks for using the calculator"<<endl;
}

bool runCalc(Calculator calc){
  string ex;
  cout<<">> ";
  cin>>ex;
  if (ex == "x")
    return false;
  calc.setExpression(ex);
  calc.getSymbol();
  calc.printexp();
  return true;
}
