#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void rotate(int arr[], int n, int d)
{
    int gcd = __gcd(n, d);

    for(int i=0; i<gcd; i++) {
        int temp = arr[i];
        int j=i;

        while(true) {
            int k = j+d;
            if (k>=n) {
                k -= n;
            }
            if(k==i) break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
        print(arr, n);
    }
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