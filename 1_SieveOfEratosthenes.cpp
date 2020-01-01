/*
SIEVE OF ERATOSTHENES

This basically is an algorithm that finds the primes in the range 1 to N
in O(n*log(log(n))) complexity and linear space complexity O(n)

-> The key idea is to assume that all numbers in the range[1, N] are primes
-> We iterate i on the range starting from 2 (first prime) and set all the (i*i + p) as not primes
    where p is just an integral multiple of i (or)
-> E.g. when i = 2, we set (2*2 + 2), (2*2 + 4), (2*2 + 6) and so on as not primes since they are divisible by i, (2 in this case)
-> We repeat the above steps until i*i <= n because when i*i exceeds n then i*i+p also exceeds n, which is of no use for us.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;
  bool primes[n+1];
  memset(primes, true, sizeof(primes));  // assuming all numbers in range[1, n] are primes

  for(int i = 2; i*i <= n; i++)
  {
    // if primes[i] == true then set all the multiples of i*i to false
    // repeat this for all prime numbers 2, 3, 5....
    if(primes[i]){
      for(int j=i*i; j<=n; j += i)
        primes[j] = false;
    }
  }

  // printing the primes
  for(int i=2; i<n+1; i++){
    // when primes[i] == true, i is prime.
    if(primes[i]) cout << i << " ";
  }
  cout << endl;

}
