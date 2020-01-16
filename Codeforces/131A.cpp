#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string str; cin >> str;
  if(all_of(str.begin(), str.end(), [](unsigned char ch){return isupper(ch);}) || all_of(str.begin()+1, str.end(), [](unsigned char ch){return isupper(ch);})){
    for(int i=0, len = str.length(); i<len; i++){
      if(str[i]>='A' && str[i]<='Z') str[i]+=32;
      else str[i] -= 32;
    }
  }
  cout << str << endl;
}