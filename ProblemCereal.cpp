#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv){
  double ton = 35273.92; //initualizing and setting a ton in oz
  double weightOz; //initualizing weightOz
  double weightTon = 0; //initualizing and setting metric tons to 0
  double boxAmount = 0; //initualizing and setting amount of boxes

  cout << "Enter the weight of breakfest ceral in ounces: " << endl; //prompting the user for the weight
  cin >> weightOz; //storing user input in weightOz

  weightTon = weightOz/ton; //converting Oz to metirc tons
  boxAmount = 1/weightTon; //canculating the amount of boxes needed

  cout << "The weight in metric tons would be: " << weightTon << endl;
  cout << "You would need  " << boxAmount << " boxes to have on metric ton. " << endl;

  return 0;
}
