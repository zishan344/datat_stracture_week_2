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
  Node *newNode = new Node(val); // create new node
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head; // copy old node
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
};
void print_linkedList(Node *head)
{
  cout << "Your linked list: " << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
  cout << endl;
};

int main()
{

  int val;
  Node *head = NULL;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, val);
  }
  print_linkedList(head);
  return 0;
}
