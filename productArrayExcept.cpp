#include <bits/stdc++.h>
using namespace std;

int outputAngka(int &x){
   int a = x;
   a = 10;
   return a;
}

//Input: nums = [1,2,3,4]
//Output: [24,12,8,6]


vector<int> productExceptSelf(vector<int>& nums) {
    vector <int> answer;
    answer.assign(nums.size(), 0); //[0,0,0,0]

    int prefix = 1;//[1,1,2,6] & prefix = 24
    for(int i = 0 ; i < nums.size() ; i++){
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    int postfix = 1;//[24,12,8,6] & postfix = 24
    for(int j = nums.size()-1 ; j >= 0 ; j--){
        answer[j] = answer[j] * postfix;
        postfix = postfix * nums[j];
    }

    return answer;
}
