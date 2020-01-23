#include <bits/stdc++.h>
using namespace std;


int visited[21];

void status(int arr[], int n);

int main()
{
  int n; cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];

  status(arr, n);
}

void status(int arr[], int n)
{
  int diff, i=0;
  string mood = "Happy";
  visited[i] = 1;
  cout << arr[i] << " ";
  int flag = 0;
  while(true)
  {
      diff = abs(arr[i]-arr[i+1]);
      if(diff == 0){
        break;
      }
      else if(visited[diff-1]){
        mood = "Angry";
        flag = 1;
      }
      cout << arr[diff-1] << " ";
      if(flag) break;

      i = diff - 1;
      
  }
  cout << endl; cout << mood << endl;
  
}
