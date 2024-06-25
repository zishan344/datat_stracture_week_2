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
  cout << "Your linked list: ";
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
  Node *head = NULL;

  while (true)
  {
    cout << "option 1: insert at tail" << endl;
    cout << "option 2: print linked list" << endl;
    cout << "option 3: Terminate" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
      cout << "Please enter value: ";
      int val;
      cin >> val;
      insert_at_tail(head, val);
    }
    else if (op == 2)
    {
      print_linkedList(head);
    }
    else if (op == 3)
    {
      break;
    }
  }

  return 0;
}
