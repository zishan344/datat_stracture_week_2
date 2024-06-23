#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

main()
{

  /*   Node a, b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL; */
  Node a(10);
  Node b(20);
  a.next = &b;
  cout << a.val << endl;
  cout << b.val << endl;
  // cout<<(*a.next).val<<endl;
  cout << a.next->val << endl;
  return 0;
}
