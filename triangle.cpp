#include<iostream>
using namespace std;

int main() {

  int n;

  cout << "Enter The Number:";
  cin >> n;
  for(int i=0;i>n;i++){
    int num=1;
   for(int j=i; j<n;j++){
    cout << i;
   }
   cout << endl;
  }

  // for(int i =0; i<=n; i++) { //1
  //   for(int j=0;j<i;j++){    //22
  //     cout << i;             //333
  //   }                        //4444
  //   cout << endl;
  //   }

  // for(int i=1; i<=n; i++){  //1
  //     int num =1;           //12
  //   for(int j=0; j<i;j++){  //123
  //     cout << num;          //1234  
  //     num += 1;
  //   }
  //    cout << endl;
  // }

    return 0;
  }