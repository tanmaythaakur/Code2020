#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n; 
  int x = 0;
  string st;
  for(int i=0; i<n; i++){
    cin >> st;
    if(st.find("++") != string::npos) x++;
    else if(st.find("--") != string::npos) x--;
  }
  cout << x << "\n";
}