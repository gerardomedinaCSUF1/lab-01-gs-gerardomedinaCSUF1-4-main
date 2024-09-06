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
  double taxes;
  double tip ;
  std::cout<< " please enter meal cost ";
  std::cin>> mealCost;
  std::cout<< " please enter tip percentage ";
  std::cin>>tipPercentage;


  result= mealCost + taxes + tip;
taxes= mealCost *kTaxRate;
tip=mealCost *(tipPercentage/100);

  std::cout<< " Restaurant Bill \n";
  std::cout<< "==========\n";
  std::cout << " Subtotal : $ "<<mealCost<<std::endl;
  std:: cout<< " Taxes : $ "<< taxes<<std::endl;
  std::cout<< " Tip : $ " <<tip<<std::endl;
std::cout<< "=========\n";
std::cout<< " total "<<result<<'\n';
return 0;
}
