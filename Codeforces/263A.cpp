#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int mat[5][5];
  int ipos, jpos;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      cin >> mat[i][j];
      if(mat[i][j] == 1){ipos = i; jpos = j;}
    }
  }
 
  int count = abs(ipos-2) + abs(jpos-2);
  cout << count << endl;
 
}