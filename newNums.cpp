#include<bits/stdc++.h>
using namespace std;

int minMaxGame(vector<int>& nums) {
    vector<int> newNums;

    while(nums.size() > 1){
      for(int i = 0 ; i < (nums.size()/2) ; i++){
            if(i%2 == 0){
                 newNums.push_back(min(nums[(2*i)], nums[((2*i)+1)]));
            }else{
                 newNums.push_back(max(nums[(2*i)], nums[((2*i)+1)]));
            }
      }
      nums.clear();
      nums = newNums;
      newNums.clear();
    }

    return nums[0];
}

int main(){
    vector<int> i = {1,3,5,2};
    cout << minMaxGame(i);
    return 0;
}
