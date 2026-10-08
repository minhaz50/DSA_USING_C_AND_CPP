#include <iostream>

using namespace std;

struct  Rectangle
{
  /* data */
  int length;
  int bredth;
};



int main(){
  Rectangle r1 = {10, 5};
  r1.length = 20;
  r1.bredth = 15;
  
  cout << sizeof(r1) << endl;
  cout << r1.length << endl;
  cout << r1.bredth << endl;
  
  return 0;
}