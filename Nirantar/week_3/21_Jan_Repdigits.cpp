#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(ll x)
{
  ll n = x, r = 0;
  while(x){
    r = r*10 + (x%10);
    x /= 10;
  }
  return (n==r);
}

void repindrome(ll lower, ll higher)
{
  int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
  int i = 0; ll cube;
  while(true)
  {
    cube = arr[i%10]*arr[i%10]*arr[i%10];
    if(cube < lower){
      i++; continue;
    }
    else if(cube > higher) break;
    else if(!isPalindrome(cube)) cout << cube << " " << arr[i%10] << "\n";
    arr[i] = arr[i]*10 + (i+1);
    i = (i+1)%10;
  }
}

int main()
{
  ll lwr, hghr; cin >> lwr >> hghr;
  repindrome(lwr, hghr);
}