#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string str; cin >> str;
  int len = str.length();
  int aux[3] = {0};
 
  for(int i=0; i<len; i+=2){
    aux[(str[i]-'0')-1]++;
  }
 
  string newstr;
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<aux[i]; j++){ 
      newstr += to_string(i+1) + "+";
    }
  }
  cout << newstr.substr(0, len) << endl;
 
}