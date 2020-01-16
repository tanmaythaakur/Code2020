#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n; cin >> n;
  int etr, ext;
  int passengers = 0;
  int capacity = INT_MIN;
  for(int i=0; i<n; i++){
    cin >> ext >> etr;
    passengers -= ext;
    passengers += etr;
    capacity = max(capacity, passengers);
  }
  cout << capacity << endl;
  
}