#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];
  
  sort(arr, arr+n);
  int rsum = accumulate(arr, arr+n, 0);
  int sum = 0;
  int coins = 0;
  for(int i=n-1; i>=0; i--){
    if(rsum >= sum){
      coins++;
      sum += arr[i];
      rsum -= arr[i];
    }
    else break;
  }
  cout << coins << "\n";
}