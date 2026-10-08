#include <iostream>
using namespace std;


int main () {
  int A[5] = {3,5,6,7,8};
  int *p;
  p = A;  // Never use & when declare an array. eg: &A - it's wrong;

  for (int i = 0; i < 5; i++)
  cout << p[i] << endl;

  return 0;
}





/* 
#include <iostream>
#include <stdlib.h>
using namespace std;

// Array inside heap
int main () {
  int *p;
  p=(int *)malloc(5 * sizeof(int));

  p[0]=10; p[1]=15; p[2]=20; p[3]=25; p[4]=30;

  for (int i = 0; i<5; i++)
  cout << p[i] <<endl;

  return 0;
}
*/


