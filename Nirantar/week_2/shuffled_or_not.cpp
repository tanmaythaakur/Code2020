#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;
  char initial[n];
  for(int i=0; i<n; i++) cin >> initial[i];
    
  char final[n];
  for(int i=0; i<n; i++) cin >> final[i];

  int i;
  for(i=0; i<n; i++){
    if(final[0]==initial[i]) break;
  }

  int flag=0;

  for(int j=0; j<n; j++){
    if(final[j] != initial[i]){flag=1; break;}
    i = (i+1)%n;
  }

  if(flag) cout << "Shuffled" << endl;
  else cout << "Not Shuffled" << endl;
}

