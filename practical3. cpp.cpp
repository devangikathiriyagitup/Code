#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
  double km;
  double cm;
  double m;
  double inch;
  double feet;

   
  cout << "Enter km: ";
  cin >> km;

  m=km*1000.00;
  cm=m*100.0;
  feet=cm*0.0328084;
  inch=feet*12;
 
  cout <<fixed<< setprecision(2);
 
   cout << "kilometer to meters"<< setw(10) << setfill(' ')  <<":" << m << endl;
  cout << "kilometer to centimeters" << setw(5) << setfill(' ') <<":" << cm << endl;
  cout << "kilometer to feet"<< setw(12) << setfill(' ')  <<":" << feet << endl;
  cout << "kilometer to inches"<< setw(10) << setfill(' ') <<":"  << inch << endl;
 

  return 0;
}