#include <iostream>
using namespace std;

int main() {
  int x;
  int  flag = 0;

  cout << " Enter a N: "<<endl;
  cin >> x;

  for (int i = 2; i <= x/2; ++i) {
   
    if (x % i == 0) {
       flag = 1;
      break;
    }
  }

  if (flag == 0) {
    cout <<" given number is a prime number.";
  }else
  {
       cout <<  "given number is not a prime number.";
  }
  

  return 0;
}