#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  int p, s, n; cin >> p >> s >> n;
  int waterUsed;

  int plantsOnNthday = p + (ceil(n/2.0) - 1)*s;
  waterUsed = (ceil(n/2.0)*(2*p + (ceil(n/2.0) - 1)*s))/2;



  cout << plantsOnNthday << '\n';
  cout << waterUsed << '\n';

}