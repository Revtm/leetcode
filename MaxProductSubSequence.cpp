#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Input: nums = [2,3,-2,4]
// Output: 6

int setMax(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int setMin(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

void swapNum(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int maxProduct(vector<int>& nums) {
    int max = nums[0];
    int min = nums[0];
    int answer = nums[0];

    for(int i = 1 ; i < nums.size() ; i++){

        if(nums[0] < 0){
           swapNum(max, min);
        }

        max = setMax(nums[i], (nums[i]*max));
        min = setMin(nums[i], (nums[i]*min));
        answer = setMax(answer, max);
    }

    return answer;
}

int main(){
    vector<int> a = {1,2,4,3,-2,2};
    cout << maxProduct(a);
    return 0;
}
