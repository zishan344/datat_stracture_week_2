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
} // done

void print_linked_list(Node *head)
{
  if (head == NULL)
  {

    return;
  }
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  };
  newNode->next = head;
  head = newNode;
};

void deleted_head(Node *&head, Node *&tail)
{
  if (head == NULL)
  {
    return;
  }

  Node *deleted_head = head;
  head = head->next;
  if (head == NULL)
  {
    tail = NULL;
  }
  delete deleted_head;
};

void delete_at_any_pos(Node *head, int pos)
{
  if (head == NULL || pos < 0)
  {
    return;
  }

  Node *temp = head;
  for (int i = 0; temp != NULL && i < pos - 1; i++)
  {
    temp = temp->next;
  };
  if (temp == NULL || temp->next == NULL)
  {
    return;
  };
  Node *delete_pos = temp->next;
  temp->next = delete_pos->next;
  delete delete_pos;
};

void deleted_tail(Node *head, Node *&tail)
{
  if (head == NULL || tail == NULL)
  {
    return;
  };
  if (head == tail)
  {
    delete head;
    head = NULL;
    tail = NULL;
    return;
  }

  Node *temp = head;
  while (temp->next != tail)
  {
    temp = temp->next;
  }
  delete tail;
  tail = temp;
  tail->next = NULL;
}

int size_of_list(Node *head)
{
  Node *tmp = head;
  int count = 0;
  while (tmp != NULL)
  {
    count++;
    tmp = tmp->next;
  };
  return count;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val, op;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> op >> val;
    if (op == 0)
    {
      insert_at_head(head, tail, val);
    }
    else if (op == 1)
    {

      insert_at_tail(head, tail, val);
    }
    else if (op == 2)
    {
      int list_size = size_of_list(head);

      if (val == 0)
      {
        deleted_head(head, tail);
      }
      else if (val == list_size - 1)
      {
        deleted_tail(head, tail);
      }
      else if (val > 0 && val < list_size)
      {
        delete_at_any_pos(head, val);
      }
    }
    print_linked_list(head);
    cout << endl;
  }

  return 0;
}
