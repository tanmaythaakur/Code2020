#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string s;
  cin >> s;
  string status;
  int count = 0;
  for(int i=0, len = s.length(); i<len; i++){
    if((s[i]=='H') || (s[i]=='Q') || (s[i]=='9')){
      count++;
    }
  }
  status = (count > 0)?"YES":"NO";
  cout << status << endl;
}