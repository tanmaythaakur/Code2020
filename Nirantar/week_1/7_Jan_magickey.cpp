#include <bits/stdc++.h>
using namespace std;

int arr[100];
int main()
{
    int n, k; cin >> n >> k;
    int rem = 0, m = 0;

    while(n>0)
    {
        arr[m++] = n%k;
        rem += (n%k);
        n /= k;
    }

    for(int i=m-1; i>=0; i--) cout << arr[i];

    cout << "\n" << rem << endl;
}