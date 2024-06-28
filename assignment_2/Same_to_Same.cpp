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

void print_linked_list(Node *x, Node *y)
{
  if (x == NULL || y == NULL)
  {
    cout << endl
         << "NO";
    return;
  }

  bool flag = true;
  Node *tmp = x;
  Node *tmp2 = y;
  // cout << "tmp_val" << tmp->next->val << tmp2->next->val << endl;
  while (tmp != NULL && tmp2 != NULL)
  {
    if (tmp->val != tmp2->val)
    {
      flag = false;
      break;
    };
    if (tmp->next == NULL && tmp2->next != NULL)
    {
      flag = false;
      break;
    }
    else if (tmp2->next == NULL && tmp->next != NULL)
    {
      flag = false;
      break;
    }

    tmp = tmp->next;
    tmp2 = tmp2->next;
  }

  if (flag == false)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES";
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
  Node *head1 = NULL;
  Node *tail1 = NULL;
  Node *head2 = NULL;
  Node *tail2 = NULL;
  int val;
  while (true)
  {

    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head1, tail1, val);
  }
  while (true)
  {

    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head2, tail2, val);
  }
  print_linked_list(head1, head2);
  cout << endl;

  return 0;
}
