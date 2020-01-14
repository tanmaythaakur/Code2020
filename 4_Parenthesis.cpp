#include <bits/stdc++.h>
using namespace std;

map <char, char> parens = { {'}','{'}, {')','('}, {']','['} };

class Stack{
private:
  int ind, capacity;
  char *arr;
public:
  
  bool isEmpty();
  char pop();
  void push(char x);
  Stack(int capacity);

};


bool Stack::isEmpty()
{
  return (ind==-1);
}


char Stack::pop()
{
    return arr[ind--];
}

void Stack::push(char x)
{
    arr[++ind] = x;
}

Stack::Stack(int capacity)
{
  this -> capacity = capacity;
  this -> ind = -1;
  this->arr = new char[capacity];
}


bool isBalanced(string s)
{
  int len = s.length();
  Stack st(len);
  for(int i=0; i<len; i++)
  {
    char ch = s[i];
    if(ch=='(' || ch=='[' || ch=='{'){
      st.push(ch);
    }
    else if(st.isEmpty() || (st.pop() != parens[s[i]])){
        return false;
      }
    
  }
  if(st.isEmpty()) return true;
  else return false;
}

int main()
{
  string s; cin >> s;
  string status;
  

  if(isBalanced(s)){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}