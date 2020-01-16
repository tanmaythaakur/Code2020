#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int luckynums[] =  {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int n; cin >> n;
  int flag = 0;
  for(auto i: luckynums){
    if(n%i==0){flag = 1; break;}
  }
  if(flag) cout << "YES" << "\n";
  else cout << "NO" << "\n";
  
}