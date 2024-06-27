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

void insert_at_any_position(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  };
  newNode->next = temp->next;
  temp->next = newNode;
};
void delete_from_position(Node *head, int pos)
{
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    temp = temp->next;
  };
  Node *deletedNode = temp->next;
  temp->next = deletedNode->next;
  delete deletedNode;
};

void deleted_head(Node *&head)
{
  Node *deleted_head = head;
  head = head->next;
  delete deleted_head;
}

int main()
{
  Node *head = NULL;
  int val;
  while (true)
  {
    cout << "option 1: Insert at tail" << endl;
    cout << "option 2: print linked list" << endl;
    cout << "option 3: Insert at head" << endl;
    cout << "option 4: Insert at any position" << endl;
    cout << "option 5: Delete at position" << endl;
    cout << "option 6: Deleted head" << endl;
    cout << "option 7: Terminate" << endl;
    int op;
    cin >> op;

    if (op == 1)
    {
      cout << endl
           << "Type inserted value: ";
      cin >> val;
      insert_at_tail(head, val);
    }
    else if (op == 2)
    {
      cout << endl
           << "Printed linkedList" << endl;
      print_linked_list(head);
      cout << endl;
    }
    else if (op == 3)
    {
      cin >> val;
      insert_at_head(head, val);
    }
    else if (op == 4)
    {
      int pos;
      cin >> pos >> val;
      if (pos == 0)
      {
        insert_at_head(head, val);
      }
      else
      {
        insert_at_any_position(head, pos, val);
      }
    }
    else if (op == 5)
    {
      cout << "Enter deleted position: ";
      int pos;
      cin >> pos;
      if (pos == 0)
      {
        deleted_head(head);
      }
      else
      {

        delete_from_position(head, pos);
      }
    }
    else if (op == 6)
    {
      deleted_head(head);
    }
    else if (op == 7)
    {
      break;
    }
  }
  cout
      << endl;

  return 0;
}
