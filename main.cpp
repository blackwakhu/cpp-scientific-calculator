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
}
