#include<iostream>
#include<math.h>
using namespace std;

 int sum(int arr[], int size){
  int sum =0;
    for(int i=0; i < size;i++){
      sum += arr[i];
    }
    return sum;
 }

int main() {
  int arr[] = {3, 5, 6, 5,4};
  int sz= 5;
  int add;
  add = sum(arr , sz);
  cout << add;
  return 0;
}