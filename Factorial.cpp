#include<iostream>
using namespace std;

int main() {
  int n, Fact=1;

  cout << "Enter the Number:";
  cin >> n;

  for(int i=1; i<=n; i++){
    Fact *= i;
  }
  cout << "Factorial " << Fact;
  return 0;
}