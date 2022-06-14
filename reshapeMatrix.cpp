#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();

    if((m*n) != (r*c)){
        return mat;
    }

    if(m == r && n == c){
        return mat;
    }

    vector<vector<int>> newShape;
    vector<int>row;
    int tempC = 0;

    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j < n ; j++){
            row.push_back(mat[i][j]);
            tempC++;

            if(tempC == c){
                newShape.push_back(row);
                row.clear();
                tempC = 0;
            }
        }
    }

    return newShape;
}

int main(){
    vector<vector<int>> test = {{1,2,3,4},{1,3,3,4},{2,5,3,6}};
    int r = 3;
    int c = 4;
    vector<vector<int>> newShape = matrixReshape(test, r,c);

    for(int i = 0 ; i < newShape.size() ; i++){
        for(int j = 0 ; j < newShape[0].size() ; j++){
            cout << newShape[i][j];
        }
        cout << endl;
    }

    return 0;
}
