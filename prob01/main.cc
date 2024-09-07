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
  double total;
  double taxes;
  double tip ;
  std::cout<< "Please input meal cost: ";
  std::cin>> mealCost;
  std::cout<< "Please input tip percentage: ";
  std::cin>>tipPercentage;


  


  std::cout<< "\nRestaurant Bill\n";
  std::cout<< "==========\n";
  std::cout << "Subtotal: $"<< std::setprecision(2) <<std::fixed<< mealCost <<std::endl;


  taxes = mealCost * kTaxRate;
  tip = ( tipPercentage / 100) * mealCost;
  std:: cout<< "Taxes: $"<< std::setprecision(2) << std::fixed<<taxes <<std::endl;

  std::cout<<"Tip: $" << std::setprecision(2) << std::fixed<< tip <<std::endl;
  
std::cout<< "=========\n";
total = tip + taxes + mealCost;
std::cout<< "Total:$"<< total <<std::endl;
return 0;
}
