/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 28, 2021
*/

#include <iostream>
using namespace std;

int main(){
  int numPeople;
  int maxCapacity;
  int morePeople;
  int lessPeople;

  cout << "How many people are attending your meeting?" << endl;

  cin >> numPeople;

  cout << "What is the max max capacity of your room?" << endl;

  cin >> maxCapacity;

  if(numPeople <= maxCapacity){
    morePeople = maxCapacity - numPeople;
    cout << "This meeting follows fire regulation protocols. You can add " << (morePeople) << " more people and still be in line with regulation." << endl;
  }

  else{
    lessPeople = numPeople - maxCapacity;
    cout << "This meeting is not in line with fire regulation. You need to kick at least " << (lessPeople) << " out in order to be in line with regulation." << endl;
  }

  return 0;

}
