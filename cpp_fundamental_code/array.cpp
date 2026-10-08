#include <iostream>

 using namespace  std;

int main () {

  int n;
  cout << "Enter size: ";
  cin >> n;
  int A [n];
  // int B [10]  = {0};
  // A[0] = 12;
  // A[1] = 25;
  // A[2] = 15;

  // cout << sizeof(A) <<endl;
  // cout << A[1] <<endl;
  // printf("%d\n", A[2]);
  // cout << B[5] << endl;

  // --------------------------------

  // for (int i = 0; i <10 ; i++){
  //   cout << A[i] <<endl;
  // }

  for (int x:A){
    cout << x << endl;
  }

  return 0;
}