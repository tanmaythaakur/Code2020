#include <bits/stdc++.h>
using namespace std;

void doSomething(vector <vector<int>> matrix, int rows, int cols)
{
    int sum = -1000000;
    vector <vector<int>> pos;
    int curSum = 0;

    for(int i=0; i<rows-1; i++){
        for(int j=0; j<cols-1; j++){
            curSum += (matrix[i][j] + matrix[i][j+1] + matrix[i+1][j] + matrix[i+1][j+1]);
            if(curSum > sum){
                 pos = {{i, j}};
                 sum = curSum;
            }
            else if(curSum == sum){
                pos.push_back({i, j});
            }
            curSum = 0;
        }
    }

    cout << sum << endl;
    for(auto p: pos){
        cout << p[0]+1 << " " << p[1]+1 << endl;
        cout << matrix[p[0]][p[1]] << " " << matrix[p[0]][p[1]+1] << " "<<  matrix[p[0]+1][p[1]] << " " << matrix[p[0]+1][p[1]+1] << endl;
    }
}



int main()
{
    int rows, cols; cin >> rows >> cols;
    vector <vector <int> > matrix;
    
    for(int i=0; i<rows; i++){
        vector <int> temp(cols);
        for(int j=0; j<cols; j++){
            cin >> temp[j];
        }
        matrix.push_back(temp);
    }

    doSomething(matrix, rows, cols);

}