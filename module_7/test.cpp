#include <bits/stdc++.h>
using namespace std;
void modify(int &a)
{
  cout << a << " " << endl;
  a = 0;
};
int main()
{
  int a = 10;
  modify(a);
  cout << a;
  return 0;
}
