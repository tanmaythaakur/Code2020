/*
Factorials for even small numbers like 50 or 100 or 200 consists of
around 65, 158, 375 digits respectively.
Storing such large numbers is not possible in c++

An Array is used to store each digit of the number and then
the elements of the array are printed which long story short, results
in the printing of the element

Order used for N! is 1*2*3*.....*ns

E.g. : 5 !
Initialize the array's first element as 1

After each iteration

1st iteration : {1};
2nd iteration : {2};
3rd iteration : {6};
4th iteration : {4, 2}  which is actually 24 when printed backwards
5th iteration : {0, 2, 1} which is 120


To find Factorials of very big numbers, just increase the array size
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;
  int arr[200], m = 1;
  arr[0] = 1;

  for(int i=1; i<=n; i++)
  {
    int temp = 0;
    for(int j=0; j<m; j++){
      int x = arr[j]*i + temp;
      temp = x / 10;
      arr[j] = x % 10;
    }

    while(temp != 0){
      arr[m] = temp % 10;
      temp /= 10;
      m++;
    }
  }


  for(int i=m-1; i>=0; i--)
     cout << arr[i];

  cout << endl;

}
