#include<iostream>
#include<cmath>
using namespace std;

int Check_prime(int num) {
    if(num <= 1){
      return false;
    }else if(num == 2){
      return true;
    }else if(num % 2 == 0){
      return false;
    }

    for(int i =3; i <= sqrt(num); i += 2){
      if(num % i == 0)
      return false;
    }
    return true;
}

int main() {
 int Number;

 cout << "Enter the Number: ";
 cin >> Number;

  if(Check_prime(Number))
   cout << Number << "is a prime Number.\n";
  else 
   cout << Number << "is not  prime number.\n";
     
  return 0;
}