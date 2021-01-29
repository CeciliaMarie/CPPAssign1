#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv){

  int maxCap; //initualizing maxi capacity
  int numPeople; //initualizing number of people attending the meeting

  cout << "Enter the maximum capacity: " << endl; //prompting the user for maximum capacity
  cin >> maxCap; //storing user input in maxCap
  cout << "Enter the amoun of people attending the meeting: "  << endl; //prompting the user for amount of people attending
  cin >> numPeople; //storing user input in numPeople

  if(numPeople <= maxCap){ //if the number of people is less then or equal to the maxCap enter loop
    cout << "The meeting can be held." << endl;
    cout << (maxCap - numPeople) << " more people can be in the meeting." << endl; //telling the user how many more people can attend
  }
  else{ //if the number of people is more then the maxCap entr loop
    cout << "Unfourtunatly the meeting cant be held in this room." << endl;
    cout << (numPeople - maxCap) << " people need to be excluded in order to hold the meeting." << endl; //telling the user how many people can't attend the meeting
  }

  return 0;
}
