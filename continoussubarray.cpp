#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int m = 2;
    int sum = 0;

    while(m <= n){
         for(int i = 0 ; i < m ; i++){
            sum += nums[i];
         }

         if(sum == 0 ){
            return true;
         }

         if(sum%k == 0){
            return true;
         }

        if(m < n){
            int window_sum = sum;
            for(int j = m ; j < n ; j++){
                window_sum += nums[j] - nums[j-m];

                if(window_sum == 0 ){
                   return true;
                }

                if(window_sum%k == 0){
                   return true;
                }
            }
        }

        m++;
        sum = 0;
    }

    return false;
}

bool checkSubarraySum2(vector<int>& nums, int k) {
        map<int,int> m;
        int sum=0;
        m[sum]=-1;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(m.count(sum%k) && i-m[sum%k]>=2)return 1;
            else if(!m.count(sum%k))m[sum%k]=i;
        }

        return 0;
    }


int main(){
    vector<int> vec = {0,1,0,3,0,4,0,4,0};
    int k = 5;
    cout << checkSubarraySum2(vec, k);
    return 0;
}
