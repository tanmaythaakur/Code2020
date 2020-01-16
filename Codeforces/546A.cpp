#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int k, n, w; cin >> k >> n >> w;
  int borrow = k*(w*(w+1))/2 - n;
  borrow = max(borrow, 0);
  cout << borrow << endl;
  
}