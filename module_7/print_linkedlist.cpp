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

void print_linked_list(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
};

int main()
{
  // Node *head = NULL;
  Node *a = new Node(10);
  Node *b = new Node(20);
  Node *c = new Node(30);
  cout << b << endl;
  a->next = b;
  b->next = c;
  cout << a->next << endl;
  /* Node *tmp = a;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  } */
  print_linked_list(a);
  cout << endl;

  return 0;
}
