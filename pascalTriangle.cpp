#include<bits/stdc++.h>
using namespace std;

void sumPascal(vector<int>subPas, vector<int> &p){
    int temp;
    p.push_back(1);
    for(int i = 1 ; i < subPas.size() ; i++){
         temp = subPas[i-1] + subPas[i];
         p.push_back(temp);
    }
    p.push_back(1);
}

void createPascal(int i, int n, vector<vector<int>> &pascal){
    vector<int> p;
    if(i <= n){
        if(i == 1){
            p = {1};
            pascal.push_back(p);
            createPascal(i+1, n, pascal);
        }else if(i == 2){
            p = {1,1};
            pascal.push_back(p);
            createPascal(i+1, n, pascal);
        }else{
            sumPascal(pascal[i-2], p);
            pascal.push_back(p);
            createPascal(i+1, n, pascal);
        }
    }
}

//cara dengan rekursif
vector<vector<int>> generate(int n){
    vector<vector<int>> pascal;
    createPascal(1, n, pascal);
    return pascal;
}

//cara singkat dari discussion
vector<vector<int>> generated(int n) {
        vector<vector<int>> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;

            for(int j = 1; j < i; j++)
                ans[i][j] = ans[i - 1][j-1] + ans[i - 1][j];
        }
        return ans;
    }

int main(){
    vector<vector<int>> pascal = generate(5);
    for(int i = 0 ; i < pascal.size() ; i++){
        for(int j = 0 ; j < pascal[i].size() ; j++){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

