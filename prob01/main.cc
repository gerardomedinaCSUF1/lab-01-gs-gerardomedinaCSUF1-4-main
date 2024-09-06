 // TODO(me): Create a program that computes the restaurant bill.
  // TODO(me): please fill in below.
// Gerardo Medina
// <CPSC 121L-02> (e.g. CPSC 121L-01)
// <Date>
// <GERARDOMEDINA395@CSU.FULLERTON.EDU>
// <gerardomedina395CSUF1>
  // TODO(me): Create a program that computes the restaurant bill.

#include <iomanip>
#include <iostream>
#include<cmath>

int main() {
const double kTaxRate =0.075;
double mealCost =0.0;
  double tipPercentage=0.0;
  double result;
  std::cout<< " please enter meal cost ";
  std::cin>> mealCost;
  std::cout<< " please enter tip percentage ";
  std::cin>>tipPercentage;
  result=mealCost + ((mealCost +kTaxRate)*(tipPercentage / 100));
  std::cout << " this is how much you have to pay "<< result<<'\n';

return 0;
}
