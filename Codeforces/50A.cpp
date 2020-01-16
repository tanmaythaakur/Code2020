#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n, m; cin >> n >> m;
  int count = (m/2)*n + ((m%2)*n)/2;
  cout << count << endl;
}