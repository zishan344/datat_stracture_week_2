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

void find_number(Node *head, int find)
{
  if (head == NULL)
  {
    cout << endl
         << "head is NULL" << endl;
    return;
  }
  if (head->val == find)
  {
    cout << "0";
    return;
  }
  int count = 0;
  bool flag = false;
  Node *tmp = head;
  while (tmp != NULL)
  {
    count++;
    if (tmp->val == find)
    {
      flag = true;
      break;
    }
    tmp = tmp->next;
  }
  if (flag == false)
  {
    cout << "-1";
  }
  else if (flag == true)
  {
    cout << count - 1;
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
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
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
    int find_val;
    cin >> find_val;
    find_number(head, find_val);
    cout << endl;
  }

  return 0;
}
