#include <iostream>
#include <string>
using namespace std;

struct Student
{
  /* data */
  int id;
  float marks;
  string name;
};

int main() {
  Student s1 = {1, 86.6, "Rahim"};
  Student s2 = {2, 90.0, "Minha"};
  Student s3;
  s3.id = 3;
  s3.marks = 98.9;
  s3.name = "Tom Latham";
  
  cout << s1.id << " " << s1.marks << " " << s1.name << endl;
  cout << s2.id << " " << s2.marks << " " << s2.name << endl;
  cout << s3.id << " " << s3.marks << " " << s3.name << endl;

  return 0;
}
