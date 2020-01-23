#include <bits/stdc++.h>
using namespace std;

string garland(string str, int num)
{
    string temp = str;
    for(int i=0; i<num; i++){
        if(i%2==0){
            for(int j=temp.length()-1; j>=0; j--){
                str += temp[j];
            }
        }
        else{
            str += temp;
        }
    }
    return str;
}


string alphaGarland(string str)
{
    string newstr;
    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            int num = str[i] - '0';
            newstr = garland(newstr, num);
            continue;
        }
        newstr += str[i];
    }
    return newstr;
}



int main()
{
    string str; cin >> str;
    string garland = alphaGarland(str);
    cout << garland << endl;
}