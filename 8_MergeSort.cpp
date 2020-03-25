#include <bits/stdc++.h>
using namespace std;


int *aux;

void merge(int arr[], int low, int mid, int high)
{
  for(int k=low; k<=high; k++){
    aux[k] = arr[k];
  }

  int i=low, j=mid+1;
  for(int k=low; k<=high; k++)
  {
    if(i>mid) arr[k] = aux[j++];
    else if(j>high) arr[k] = aux[i++];
    else if(aux[i] <= aux[j]) arr[k] = aux[i++];
    else arr[k] = aux[j++];
  }
}

void mergeSort(int arr[], int low, int high)
{
  if(low < high)
  {
    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
  }
}

int main()
{
  int n; cin >> n;
  int arr[n];
  aux = new int[n];
  for(int i=0; i<n; i++) cin >> arr[i];

  mergeSort(arr, 0, n-1);
  delete []aux;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
