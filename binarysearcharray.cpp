#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int mid;
    int n = nums.size();
    int low = 0;
    int hi = n-1;

    while(low <= hi){
        mid = low + (hi-low)/2;
        if(nums[mid] == target){
            return mid;
        }

        if(target < nums[mid]){
            hi = mid-1;
        }else{
            low = mid+1;
        }
    }

    return -1;
}

int main(){
    vector<int> a = {-1,0,3,5,9,12};
    int i = bsearch(a, 9);
    cout << i;
    return 0;
}
