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


  


  std::cout<< " Restaurant Bill \n";
  std::cout<< "==========\n";
  std::cout << " Subtotal : $ "<< std::setprecision(2) <<std::fixed<< mealCost <<std::endl;


  taxes = mealCost * kTaxRate;
  tip = ( tipPercentage / 100)  * mealCost;
  std:: cout<< " Taxes : $ "<< std::setprecision(2) << std::fixed<<taxes <<std::endl;

  std::cout<< " Tip : $ " << std::setprecision(2) << std::fixed<<tip <<std::endl;
  
std::cout<< "=========\n";
result = tip + taxes + mealCost;
std::cout<< " total "<< result <<std::endl;
return 0;
}
