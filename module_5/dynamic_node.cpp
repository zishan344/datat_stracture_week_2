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
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  head->next = a;
  a->next = b;
  // cout << (*a.next)->val;
  // cout << (*(*a).next).val << endl;
  cout << a->next->val;

  return 0;
}
