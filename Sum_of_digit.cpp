#include<iostream>
using namespace std;

int Sum_of_digit(int number){
  int  Sum =0, Last_digit, num;
 while(number > 0){
    Last_digit = number % 10;
    number = number / 10;
    Sum += Last_digit;
  }
   return Sum;
}

int main() {
  int number, sum;

  cout <<"Enter the Number: ";
  cin >> number;
  sum = Sum_of_digit(number);
    cout <<"Sum of digit : " << sum;
  
    return 0;
}