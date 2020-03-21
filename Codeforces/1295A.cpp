#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  int t; cin >> t;
  int n;
  int ones = 0, seven = 0;
  while(t--)
  {
    cin >> n;
    if(n%2){
      n -= 3;
      cout << 7;
      for(int i=0; i<n/2; i++)cout << 1;
    }
    else{
      for(int i=0; i<n/2; i++) cout << 1;
    }
    cout << '\n';
  }
}

