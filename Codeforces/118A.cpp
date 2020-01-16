#include <bits/stdc++.h>
using namespace std;
 
bool isVowel(char x)
{
  return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'
  || x=='Y' || x=='y');
}
 
 
 
int main()
{
  string s; cin >> s;
  string newstring;
 
  for(auto i: s)
  {
    if(isVowel(i)) continue;
    else{
      newstring += ".";
      newstring += tolower(i);
    }
  }
  cout << newstring << endl;
}
