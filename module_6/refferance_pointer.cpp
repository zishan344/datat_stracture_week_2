#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
  p = NULL;
  cout << p << endl;
};
int main()
{
  int p;
  cin >> p;
  int *ptr = &p;
  fun(ptr);
  cout << ptr << endl;
  cout << p;
  return 0;
}
