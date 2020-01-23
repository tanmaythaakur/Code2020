#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  int pos = 0;
  int steps = 0;
  int n; cin >> n;
  vector <string> dolls(n);
  for(int i=0; i<n; i++){
    cin >> dolls[i];
    transform(dolls[i].begin(), dolls[i].end(), dolls[i].begin(), ::tolower);
  }


  for(auto str: dolls)
  {
    char start = str[0], end = str[str.length()-1];
    int count = 1;
    for(int i=1; i<str.length()-1; i++){
      if(((str[i]>=start)&&(str[i]<=end)) || ((str[i]<=start)&&(str[i]>=end)))
        continue;
      count++;
    }
    //cout << str << " is in box " << count << endl;

    if(pos==count) cout << 'n' << " " << '0' << endl;

    else if (pos > count) {
      cout << "b" << " " << (pos-count) << endl;
      steps += (pos-count);
      pos -= (pos-count);
    
    }
    else {
      cout << "f" << " " << (count - pos) << endl; 
      steps += (count - pos); 
      pos += (count-pos);
    }
  }
  cout << steps << endl;
}