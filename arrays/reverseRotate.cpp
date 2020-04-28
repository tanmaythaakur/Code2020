#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++; end--;
    }
}

void rotate(int arr[], int n, int d) 
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=10, d=3;
    rotate(arr, n, d);
    cout << "Final: ";
    print(arr, n);
    return 0;
}