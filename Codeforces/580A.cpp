#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n;
  int *arr = (int*)calloc(n, sizeof(int));
  int count = 0, cur = 1;
 
  for(int i=0; i<n; i++)
    cin >> arr[i];
 
  if(n==1) cout << n << endl;
  else
  {for(int i=0; i<n-1; i++){
    if(arr[i]<=arr[i+1]){
      cur++;
    }
    else{
      cur = 1;
    }
    count = max(count, cur);
  }
  cout << count << endl;}
}