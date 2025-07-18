#include <iostream>
using namespace std;

 int Factorial( int n) {
   int Fact = 1;
   for (int i = 1; i <= n; i++)
 {
    Fact *= i;
 } 
    return Fact;
}

int nCr(int n,int r) {
  int Fact_n= Factorial(n);
  int Fact_r = Factorial(r);
  int Fact_nnr = Factorial(n-r);

  return Fact_n / (Fact_r * Fact_nnr);
}

int main () {
  int n, r;

  cout << "Enter the Number : ";
  cin >> n;
  cin >> r;
  cout << nCr(n, r) <<endl;

   return 0;
}