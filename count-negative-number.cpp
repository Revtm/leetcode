#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int count = 0;
    int m = grid[0].size();
    int n = grid.size();
    int i = 0;
    int j = m-1;

    while(i < n){
        if(j >= 0){
            if(grid[i][j] < 0){
                count++;
                j--;
            }else{
              i++;
              j = m-1;
            }
        }else{
            i++;
            j = m-1;
        }
    }

    return count;
}

int countNegativesBinary(vector<vector<int>>& grid){
    int row = grid.size();
    int col = grid[0].size();
    int count = 0;

    for(int i = 0 ; i < row ; i++){
        int low = 0;
        int hi = col-1;
        int mid;

        while(low <= hi){
            mid = low + (hi-low)/2;
            if(grid[i][mid] < 0){
                hi = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        count += (col - low);
    }

    return count;
}

/*
{{4,2,-1},
 {3,1,-2},
 {2,-1,-3}
*/

int main(){
    vector<vector<int>> x = {{4,3,2,1}/*,{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}*/};

    cout << countNegativesBinary(x);
}
