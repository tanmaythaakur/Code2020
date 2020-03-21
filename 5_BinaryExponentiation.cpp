#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void binExp(ll, ll);
ll n, p;
ll m = 10000000;

int main()
{
  cin >> n >> p;
  binExp(n, p);
}

void binExp(ll n, ll p)
{
  ll sum = 1;
  while(p)
  {
    if(p&1) sum  = sum * n % m;
    n *= n % m;
    p >>= 1;
  }
  cout << sum << endl;
}
