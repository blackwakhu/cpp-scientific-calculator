#include <iostream>

#include "module/calc.h"

using namespace std;
using namespace calculator;

void startCalc(Calculator);

int main() {
  cout << "This is a scientific calculator!\n";
  Calculator calc;
  startCalc(calc);
}

void startCalc(Calculator calc){
  cout << "Welcome to the calculator"<<endl;
  string exp;
  while(true){
    cout<<"enter the expression or x to exit"<<endl;
    cin>>exp;
    if (exp == "x")
      break;
    calc.setExpression(exp);
    calc.printexp();
    cout<<endl;
  }
  cout<<endl<<"thanks for using the calculator"<<endl;
}
