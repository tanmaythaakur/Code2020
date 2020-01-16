#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string str;
  cin >> str; int len = str.length();
  int aux[26] = {0};
  for(int i=0; i<len; i++){
    aux[str[i] - 'a']++;
  }
  int count = 0;
  for(int i=0; i<26; i++){
    if(aux[i]) count++;
  }
 
  if(count & 1) cout << "IGNORE HIM!" << endl;
  else cout << "CHAT WITH HER!" << endl; 
}