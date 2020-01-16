#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string str; cin >> str;
  char ch[] = {'h', 'e', 'l', 'l', 'o'};
  int len = str.length();
  int x = 0;
 
  for(int i=0; i<len; i++){
    if(str[i]==ch[x]) x++;
    if(x==5)break;
  }
  if(x==5) cout << "YES" << "\n";
  else cout << "NO" << "\n";
  
}