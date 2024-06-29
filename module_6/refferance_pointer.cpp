#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
  p = NULL;
  cout << p << endl;
};
void modify(int a)
{
  cout << &a << endl;
  a = 20;
};
int main()
{
  int p = 10;
  // cin >> p;
  // int *ptr = &p;
  // fun(ptr);
  // cout << ptr << endl;
  // cout << p;
  int x = 10;
  cout << &x << endl;
  modify(x);
  cout << x << endl;

  return 0;
}
