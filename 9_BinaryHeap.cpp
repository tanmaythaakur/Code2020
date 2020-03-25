#include <bits/stdc++.h>
using namespace std;


class Heap{
private:
  int size, *arr, capacity;

public:
  Heap(int n)
  {
    this->capacity = n;
    arr = new int[n+1];
    this->size = 0;
  }

  void sink(int k)
  {

    while(2*k <= this->size)
    {
      int j = 2*k;
      if(j < this->size && arr[j] < arr[j+1]) j++;
      if(arr[j] <= arr[k]) break;
      else swap(arr[j], arr[k]);
      k = j;
    }
  }


  void swim(int k)
  {
    while(k>1)
    {
      if(arr[k] > arr[k/2]) swap(arr[k], arr[k/2]);
      k = k/2;
    }
  }


  void insert(int data)
  {
    arr[++size] = data;
    swim(size);
  }

  void pop()
  {
    swap(arr[size--], arr[1]);
    sink(1);
  }

  int top()
  {
    return arr[1];
  }

  void show()
  {
    for(int i=1; i<=this->size; i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }

};


int main()
{
  int n = 10;
  Heap h(10);
  h.insert(5);
  h.insert(36);
  h.insert(81);
  h.insert(7);
  h.insert(42);
  h.insert(35);
  h.insert(14);
  h.insert(41);
  h.insert(2);
  h.insert(4);
  h.show();

  h.pop();
  h.show();
  h.pop();
  h.show();

  return 0;
}
