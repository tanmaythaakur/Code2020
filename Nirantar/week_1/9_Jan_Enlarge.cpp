#include <bits/stdc++.h>
using namespace std;



int main()
{
    int rows, cols; cin >> rows >> cols;
    int rmx[rows], cmn[cols];
    vector<vector <int>> mat;
    for(int i=0; i<rows; i++){
        vector <int> temp(cols);
        for(int j=0; j<cols; j++){
            cin >> temp[j];
        }

        rmx[i] = *max_element(temp.begin(), temp.end());
        mat.push_back(temp);
    }

    for(int j=0; j<cols; j++){
        int m = 10000000;
        for(int i=0; i<rows; i++){
            if(mat[i][j] < m) m = mat[i][j];
        }
        cmn[j] = m;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            mat[i][j] += (rmx[i] + cmn[j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}