#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n;
  string str;
  cin >> str;
  int len = str.length();
  int count = 0;
  for(int i=0; i<len-1; i++){
    if(str[i] == str[i+1]) count++;
  }
 
  cout << count << endl;
}