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
  };
};
void insert_at_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  };
  temp->next = newNode;
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

int main()
{
  Node *head = NULL;
  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, val);
  }
  print_linked_list(head);
  return 0;
}
