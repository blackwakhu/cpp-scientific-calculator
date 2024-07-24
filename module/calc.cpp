#include "calc.h"

using namespace calculator;

void Calculator::getSymbol(){
  for(char c: exp)
    symbol.push_back(c);
}

void Calculator::printexp(){
  for(char c: symbol)
    cout<<c;
}

int Calculator::createMath(){
  int num1, count = 0;
  string tempExp, tempInt;
  char sign;
  // bool isSign(false);
  for(char c: symbol){
    if (isdigit(c)){
      tempInt.append(1, c);
    }else if(c == '+' || c == '-' || c == '*' || c == '/'){
      if (!num1)
        num1 = stoi(tempInt);
      else
        num1 = Calculator::handleExp(num1, stoi(tempInt), sign);
      tempInt.clear();
      sign = c;
    }
    if (count == symbol.size()-1){
      num1 = Calculator::handleExp(num1, stoi(tempInt), sign);
    }
    count = count + 1;
  }
  return num1;
}

int Calculator::handleExp(int n, int x, char sign){
    if(sign == '+')
      return n + x;
    else if(sign == '-')
      return n - x;
    else if(sign == '*')
      return n * x;
    else if(sign == '/')
      return n / x;
    else if(sign == '%')
      return n % x;
    else
      return n;
}

