#include <bits/stdc++.h>
using namespace std;

int rem = 0;
void magic(int n, int k)
{
    if(n==0) return;
    magic(n/k, k);
    rem += (n%k);
    cout << n%k;
}


int main()
{
    int n, k; cin >> n >> k;
    magic(n, k);
    cout << endl;
    cout << rem << endl;
}