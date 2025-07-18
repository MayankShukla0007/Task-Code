#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int num1 = 1, count, num2 =0,n;

  cout <<"Enter the Number: ";
  cin >> n;

  for(int i=1; i <= n; i++) {
     count = num1 + num2;
     cout << i << ". "<< count << "\n";
     num2 = num1;
     num1 = count;
  }

  return 0;
}