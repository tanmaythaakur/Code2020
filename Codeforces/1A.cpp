#include <iostream>
using namespace std;
 
 
int main()
{
	long int m, n, a;
	cin >> m >> n >> a;
	long long int count1 = 0, count2 = 0;
	
	if (m%a==0){
		count1 += (m/a);
	}
	else{
		count1 += ((m/a)+1);
	}
	if (n%a==0){
		count2 += (n/a);
	}
	else{
		count2 += ((n/a)+1);
	}
 
 
	cout << count1*count2 << endl;
}