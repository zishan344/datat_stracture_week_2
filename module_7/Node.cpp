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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void print_linked_list(Node *head)
{
  if (head == NULL)
  {
    cout << endl
         << "head is NULL" << endl;
    return;
  }
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
};

void insert_at_head(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
  };
  newNode->next = head;
  head = newNode;
};

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (true)
  {

    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val);
  }
  cout
      << endl;

  return 0;
}
