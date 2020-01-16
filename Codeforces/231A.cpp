#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n;
  int count = 0;
  while(n--)
  {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int sum = a[0] + a[1] + a[2];
    if(sum>1) count++;
  }
  cout << count << endl;
}