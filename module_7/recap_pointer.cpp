#include <bits/stdc++.h>
using namespace std;

int main()
{
  // initial tested in pointer
  /*  int a = 10;
   int *ptr = &a;
   cout << "value of a: " << a << endl;
   cout << "address of a: " << &a << endl;
   cout << "value of a ptr: " << ptr << endl;
   cout << "value of pointed by ptr: " << *ptr << endl; */

  // pointer arithmetic
  int arr[3] = {1, 2, 3};
  int *ptr2 = arr;
  cout << *ptr2 << endl;
  ptr2++;
  cout << *ptr2 << endl;

  return 0;
}