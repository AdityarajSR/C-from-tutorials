#include <iostream>
using namespace std;

void duplicate (int &a, int& b, int &c)
{
  a *= 2;
  b *= 2;
  c *= 2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}
// difference between call by reference using pointers and reference variable 
void duplicate (int* a, int* b, int* c)
{
  *a *=2;
  *b *=2;
  *c *=2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (&x, &y, &z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}
