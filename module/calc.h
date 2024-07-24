#include<iostream>
#include<string>
#include<list>

using namespace std;

namespace calculator{
  struct data{
    string ex;
    data* next;
  };
  class Calculator{
    private:
      list<char> symbol;
      string exp;
    public:
      Calculator(){}
      void setExpression(string ex){exp = ex;};
      void getSymbol();
      void printexp();
      void createMath();
  };
};