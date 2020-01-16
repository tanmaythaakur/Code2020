#include <bits/stdc++.h>
using namespace std;
 
 
bool isDistinct(int year)
{
  int arr[10] = {0};
  while(year) arr[year%10]++, year /= 10;
 
  for(int i=0; i<10; i++){
    if(arr[i]>1) return false;
  }
  return true; 
 
}
 
 
int main()
{
  int year; cin >> year;
  while(true)
  {
    year++;
    if(isDistinct(year)){
      cout << year << endl; break;
    }
  }
}