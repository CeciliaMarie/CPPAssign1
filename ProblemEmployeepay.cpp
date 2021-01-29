#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv){

  double normalRate = 16.00; //paided per hour
  double overTime = 0.0; //hours of over time
  double overTimeRate = (3.0/2.0); //paided overtime per hour
  double medInsur = 10.00; //flat rate medical insurance per week
  double sSTax = 0.06; //percent of social security tax
  double federaTax = 0.14; //percent of federal income tax
  double stateTax = 0.05; //percent of state income tax
  double hoursWorked = 0; // hours user worked
  double grossPay = 0; //how much the user made
  double netTakeHome = 0; //how much user takes home after taxes

  cout << "How many hours did you work this week? " << endl;
  cin >> hoursWorked; //storing hours the user worked

  if(hoursWorked > 40){
    overTime = hoursWorked-40;
    hoursWorked = 40;
  }

  //calculating total amount made
  grossPay = (normalRate * hoursWorked) + (overTime * normalRate * overTimeRate);

  //calculating amount left over money to take home;
  netTakeHome = grossPay - (medInsur + (grossPay * sSTax) + (grossPay * federaTax) + (grossPay * stateTax));

  cout << "Gross pay amount: " << grossPay << endl;
  cout << "Amount with held for social security: " << grossPay * sSTax << endl;
  cout << "Amount with held for federal income tax: " << grossPay * federaTax << endl;
  cout << "Amount with held for state income tax: " << grossPay * stateTax << endl;
  cout << "Amount with held for medical insurance: " << medInsur << endl;
  cout << "Net take-home pay for the week: " << netTakeHome << endl;

  return 0;
}
