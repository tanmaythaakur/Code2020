#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int n, k; cin >> n >> k;
  vector <int> v(n);
  int count = 0;
  for(int i=0; i<n; i++)
    cin >> v[i];
 
  for(int i=0; i<n; i++){
    if((v[k-1] <= v[i]) && v[i]>0) count++;
    else break;
  }
 
  cout << count << endl;
 
}