#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
  int low = 0;
  int hi = nums.size() - 1;
  int mid;
  int ans = -1;

  while(low <= hi){
    mid = low + (hi - low)/2;
    if(nums[mid] == target){
      ans = mid;
      break;
    }else if(nums[mid] < target){
      low = mid + 1;
    }else{
      hi = mid - 1;
    }
  }

  return ans;
}


int main(){
  vector<int> v {1,2,3,4,5,6,7,8,9,10};
  int target = 9;

  cout << search(v, target);

  return 0;
}
