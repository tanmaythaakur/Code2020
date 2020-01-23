#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  vector <int> m1, m2;
  int m, n; cin >> m;
  int temp;
  for(int i=0; i<m; i++) {
    cin >> temp; 
    if(!(temp%5)) m1.push_back(temp);
    else m2.push_back(temp);
  }
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> temp; 
    if(!(temp%5)) m1.push_back(temp);
    else m2.push_back(temp);
  }

  sort(m1.begin(), m1.end());
  sort(m2.begin(), m2.end());

  for(int i=0; i<m1.size(); i++) cout << m1[i] << " ";
  cout << '\n';
  for(int i=0; i<m2.size(); i++) cout << m2[i] << " ";
}