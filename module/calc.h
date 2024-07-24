#include<iostream>
#include<string>
#include<list>

using namespace std;

namespace calculator{
  struct data{
    int num1;
    int num2;
    bool is_exp;
    char exp;
    string key;
    data* next;
  };
  
  class Calculator{
    private:
      list<char> symbol;
      string exp;
      data head;
    public:
      Calculator(){}
      void setExpression(string ex){exp = ex;};
      void getSymbol();
      void printexp();
      int createMath();
      void createMathematics();
      void compute();
      int handleExp(int, int, char);
  };
};