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
  cout << "Your linked list: " << endl;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
  cout << endl;
};

void insert_at_position(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  for (int i = 1; i <= pos; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  cout << endl
       << endl
       << "Inserted position " << pos << endl;
};
void insert_at_head(Node *&head, int val)
{

  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
  cout << "insert_at_head" << endl
       << endl;
}
void delete_from_position(Node *head, int pos)
{
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  };
  Node *deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  delete deleteNode;
};
int main()
{
  Node *head = NULL;

  while (true)
  {
    cout << "option 1: Insert at tail" << endl;
    cout << "option 2: print linked list" << endl;
    cout << "option 3: Insert at any position" << endl;
    cout << "option 4: Insert at head" << endl;
    cout << "option 5: Delete at position" << endl;
    cout << "option 6: Terminate" << endl;
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
      int pos, val;
      cout << "Enter a position: ";
      cin >> pos;
      cout << "Enter a value: ";
      cin >> val;
      if (pos == 0)
      {
        insert_at_head(head, val);
      }
      else
      {
        insert_at_position(head, pos, val);
      }
    }
    else if (op == 4)
    {
      int val;
      cout << "Enter a value: ";
      cin >> val;
      insert_at_head(head, val);
    }
    else if (op == 5)
    {
      cout << "Enter a position: ";
      int pos;
      cin >> pos;
      delete_from_position(head, pos);
    }
    else if (op == 6)
    {
      break;
    }
  }

  return 0;
}
