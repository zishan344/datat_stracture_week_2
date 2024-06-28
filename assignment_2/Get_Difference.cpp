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
  if (head->next == NULL)
  {
    cout << "0";
    return;
  }
  int min = INT_MAX;
  int max = INT_MIN;
  Node *tmp = head;
  while (tmp != NULL)
  {
    if (tmp->val < min)
    {
      min = tmp->val;
    }
    else if (tmp->val > max)
    {
      max = tmp->val;
    }
    tmp = tmp->next;
  }
  cout << max - min;
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
  print_linked_list(head);
  cout
      << endl;

  return 0;
}
