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
// initial function for insert a tail;
/* void insert_at_tail(Node *head, Node *val)
{
  Node *newNode = new Node(val->val);

  Node *temp = head;
  // cout << temp << " " << endl;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
};
 */

// efficient function for insert a tail

void insert_at_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  cout << temp << " old temp" << endl;
  int a = 0;
  while (temp->next != NULL)
  {
    a += 1;
    temp = temp->next;
  };

  temp->next = newNode;
  cout << a << " count " << endl;
}

// exercise different approach

/* void insert_at_tail(Node **head, int val)
{
  Node *newNode = new Node(val);
  cout << "head address " << head << endl;
  cout << "head value " << *head << endl;
  if (*head == NULL)
  {
    *head = newNode;
  }
  cout << "head value " << head << endl;
}
 */
// printed linked list
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
  // Node *head = NULL;
  Node *head = NULL;
  /*  Node *a = new Node(20);
   Node *b = new Node(30);
   head->next = a;
   insert_at_tail(head, b);*/
  // int a = NULL;

  // insert_at_tail(&head, 10);
  insert_at_tail(head, 10);
  insert_at_tail(head, 20);
  insert_at_tail(head, 30);
  insert_at_tail(head, 40);

  print_linked_list(head);
  cout
      << endl;

  return 0;
}
