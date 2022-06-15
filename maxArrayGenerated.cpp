#include<bits/stdc++.h>
using namespace std;

int getMaximumGenerated(int n) {
    vector<int>nums;
    int j, maximum = 0;

    for(int i = 0 ; i <= n ; i++){
        if(i == 0 || i == 1){
            nums.push_back(i);
        }else if(i%2 == 0){
            j = i/2;
            nums.push_back(nums[j]);
            maximum = max(maximum, nums[i]);
        }else if(i%2 == 1){
            j = i/2;
            nums.push_back(nums[j] + nums[j+1]);
            maximum = max(maximum, nums[i]);
        }
    }

    return maximum;
}

int main(){

    return 0;
}
