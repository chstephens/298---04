/*
Dominic Stephens
#2338728
CPSC-01 298 C++
January 28, 2021
*/

#include <iostream>
using namespace std;

int main(){
  float hoursWorked;
  float overtimeRate;
  float salary = 16;
  float overtimeMoney;
  float overtimePay = (salary * 1.5);
  float fullPay;
  float finalPay;

  cout << "How many hours did you work?" << endl;

  cin >> hoursWorked;

  if (hoursWorked <= 40){
    fullPay = hoursWorked * salary;
  }

  else{
    overtimeMoney = (hoursWorked - 40) * overtimePay;
    fullPay = (salary * hoursWorked) + overtimePay;
  }

  finalPay = (fullPay - (fullPay * .75)) - 10;

  cout << "Your final take home pay is " << finalPay << " ." << endl;



}
