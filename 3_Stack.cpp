#include <bits/stdc++.h>
using namespace std;

class Stack{
private:
  int ind, capacity;
  int *arr;
public:
  int top();
  bool isEmpty();
  int pop();
  void push(int x);
  bool isFull();
  Stack(int capacity);

};


bool Stack::isEmpty()
{
  return (ind==-1);
}

bool Stack::isFull()
{
  return (ind==(capacity-1));
}

int Stack::top()
{
  if(!isEmpty()) return arr[ind];
  else return INT_MIN;
}

int Stack::pop()
{
  if(!isEmpty())
  {
    return arr[ind--];
  }
  else return INT_MIN;
}

void Stack::push(int x)
{
  if(! isFull())
  {
    arr[++ind] = x;
  }
  else cout << "Stack FULL" << endl;
}

Stack::Stack(int capacity)
{
  this -> capacity = capacity;
  this -> ind = -1;
  this->arr = new int[capacity];
}

int main()
{
  int n; cin >> n;
  Stack st(n);
}