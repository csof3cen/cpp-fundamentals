#include <iostream>

int main(){
  int a = 67;
  short c = 5;
  long int e = 6;
  unsigned int b = 5;
  unsigned short int d = 6;
  unsigned long long int veryLong = 658787786986897;

  int var1, var2, var3; // Multiple declarations on same line
  int cze = 0, dz = 0;

  auto variableThatTypeWillBeDeducted = 6;

  decltype(a) newAutoTypedVariable; // newAutoTypedVariable is type int, deduced from a variable

  std::cout << veryLong << std::endl;
  std::cout << &a << std::endl;

  return 0;
}