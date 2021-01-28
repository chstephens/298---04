/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 28, 2021
*/

#include <iostream>
using namespace std;

int main(){
  float ton = 35273.92;
  float cerealWeight;
  float cerealTons;

  cout << "How many ounces is your cereal?" << endl;

  cin >> cerealWeight;

  float cerealDivider = (cerealWeight / ton);

  cout << "One box of your cereal is equal to " << cerealDivider << endl;

  cout << "It would take " << (ton / cerealDivider) << " boxes of your cereal to reach one metric ton" << endl;

  return 0;



}
