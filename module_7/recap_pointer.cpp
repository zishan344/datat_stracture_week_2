#include <bits/stdc++.h>
using namespace std;
void increment(int *ptr)
{
  (*ptr)++;
};
int *createArray(int size)
{
  return new int[size]{0};
}

void swap_fun(int *a, int *b)
{

  // cout << *a << " " << *b << endl;
  int temp = *a;
  *a = *b;
  *b = temp;
};
void reverseArr(int *arr, int size)
{

  int *start = arr;
  int *end = arr + size - 1;

  while (start < end)
  {
    int tmp = *start;
    *start = *end;
    *end = tmp;
    start++;
    end--;
  }
};

int main()
{

  {

    // initial tested in pointer
    {
      int a = 10;
      int *ptr = &a;
      /*     cout << "value of a: " << a << endl;
          cout << "address of a: " << &a << endl;
          cout << "value of a ptr: " << ptr << endl;
          cout << "value of pointed by ptr: " << *ptr << endl; */
    }

    // pointer arithmetic
    {
      int arr[3] = {1, 2, 3};
      int *ptr2 = arr;
      /*   cout << *ptr2 << endl;
        ptr2++;
        cout << *ptr2 << endl; */
    }

    // pointer comparison

    {
      int a = 10;
      int b = 20;
      int *ptr1 = &a;
      int *ptr2 = &b;
      /* if (*ptr1 < *ptr2)
      {
        cout << "ptr1 points to a memory location before ptr2" << endl;
      } */
    }

    // Pointers and Arrays

    {
      int arr[3] = {10, 20, 30};
      int *ptr = arr;
      for (int i = 0; i < 3; i++)
      {
        // cout << *(ptr + i) << " ";
      }
      /* for (int i = 0; i < 3; i++)
      {
        cout << *(arr + i) << " ";
      } */
    }

    // Passing pointers to functions:
    {
      int a = 10;
      increment(&a);
      // cout << "Value of a after increment: " << a << endl;
    }

    // return pointer from function
    {
      int *arr = createArray(5);
      // use the array
      for (int i = 0; i < 5; i++)
      {
        // cout << arr[i] << " ";
      }

      delete[] arr;
    }

    // dynamic memory allocation

    {
      int *ptr = new int;
      *ptr = 10;
      // cout << *ptr << endl;
      delete ptr;
      // dynamic array handling
      int *arr = new int[5];
      for (int i = 0; i < 5; i++)
      {
        arr[i] = i * 10;
      }
      for (int i = 0; i < 5; i++)
      {
        // cout << arr[i] << " ";
      }

      delete[] arr;
    }

    // Pointer to a pointer
    {

      int a = 10;
      int *ptr = &a;
      int **ptr2 = &ptr;

      // cout << "Value of a: " << a << endl;
      // cout << "Value of ptr: " << *ptr << endl;
      // cout << "Value of ptr2: " << **ptr2 << endl;
    }
  }

  // exercises

  // Write a function to swap two integers using pointers.

  {

    int a = 10, b = 20;
    swap_fun(&a, &b);
    // cout << "a: " << a << " b: " << b << endl;
  }

  // Write a program to reverse an array using pointers.
  {
    int arr[5] = {10, 20, 30, 40, 50};
    reverseArr(arr, 5);
    for (int i = 0; i < 5; i++)
    {
      cout << arr[i] << " ";
    }
  }

  return 0;
}
