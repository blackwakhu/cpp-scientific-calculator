#include "calc.h"

using namespace calculator;

void Calculator::getSymbol(){
  for(char c: exp)
    symbol.push_back(c);
}

void Calculator::printexp(){
  Calculator::getSymbol();
  for(char c: symbol)
    cout<<c<<"/t";
}
