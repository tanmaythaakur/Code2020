#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n, t; cin >> n >> t;
  string pos; cin >> pos;
  int len = pos.length();
  for(int x=0; x<t; x++){
    int i=1;
    while(i<len){
      if(pos[i]=='G' && pos[i-1]=='B'){
        pos[i] = 'B'; pos[i-1] = 'G';
        i++;
      }
      i++;
    }
  }
  cout << pos << endl;
}