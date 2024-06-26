#include <bits/stdc++.h>
using namespace std;

int main()
{
  // initial tested in pointer
  int a = 10;
  int *ptr = &a;
  cout << "value of a: " << a << endl;
  cout << "address of a: " << &a << endl;
  cout << "value of a ptr: " << ptr << endl;
  cout << "value of pointed by ptr: " << *ptr << endl;

  return 0;
}
