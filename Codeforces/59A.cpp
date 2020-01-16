#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  string str; cin >> str;
  int len = str.length();
  int uct = 0, lct = 0;
  for(int i=0; i<len; i++){
    if(str[i]>='A' && str[i]<='Z') uct++;
    else lct++;
  }
 
  if(lct>=uct){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
  }
  else transform(str.begin(), str.end(), str.begin(), ::toupper);
 
  cout << str << endl;
}