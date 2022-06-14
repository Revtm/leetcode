#include<bits/stdc++.h>
using namespace std;

vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
    unordered_map<int, int> mapNums;
    for(int i = 0 ; i < nums.size() ; i++){
        mapNums[nums[i]] = i;
    }

    for(int i = 0 ; i < operations.size() ; i++){
        mapNums[operations[i][1]] = mapNums[operations[i][0]];
        mapNums[operations[i][0]] = -1;
    }

    for(auto i : mapNums){
        if(i.second != -1){
            nums[i.second] = i.first;
        }
    }

    return nums;
}


int main(){
    vector<int> nums = {1,2,4,6};
    vector<vector<int>> operations = {{1,3},{4,7},{6,1}};

    vector<int> newNums = arrayChange(nums, operations);
    for(int i : newNums){
        cout << i << " ";
    }
    return 0;
}
