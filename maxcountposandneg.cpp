#include <bits/stdc++.h>
using namespace std;

int maximumCount(vector<int>& nums) {
   int low = 0;
   int hi = nums.size() - 1;
   int fPos = -1;
   int lNeg = -1;

   // [-2,-1,-1,0,1,2,3,4]
   int midPos;
   while(low <= hi){
     midPos = low + (hi - low)/2;
     if(((midPos > 0 && nums[midPos-1] <= 0) || midPos == 0) && nums[midPos] > 0){
       fPos = midPos;
       break;
     }

     if(nums[midPos] > 0){
       hi = midPos - 1;
     }else{
       low = midPos + 1;
     }
   }

   low = 0;
   hi = nums.size() - 1;

   // [-2,-1,-1,0,1,2,3,4]
   int midNeg;
   while(low <= hi){
     midNeg = low + (hi - low)/2;
     if(((midNeg < (nums.size()-1) && nums[midNeg+1] >= 0)|| midNeg == nums.size()-1) && nums[midNeg] < 0){
       lNeg = midNeg;
       break;
     }

     if(nums[midNeg] == 0){
       hi = midNeg - 1;
     }else if(nums[midNeg] > 0){
       hi = midNeg - 1;
     }else{
       low = midNeg + 1;
     }
   }

   int ans;
   if(fPos == -1 && lNeg == -1){
     ans = 0;
   }else if(fPos == -1 || lNeg == -1){
     if(fPos > -1){
       ans = nums.size() - fPos;
     }else{
       ans = lNeg + 1;
     }
   }else{
     int posCount = nums.size() - fPos;
     int negCount = lNeg + 1;
     if(posCount > negCount){
       ans = posCount;
     }else{
       ans = negCount;
     }
   }

   return ans;
}

int main(){
  vector<int> v {-2,-1,-1,0,1,2,3,4};
  // countPos = 4
  // countNeg = 3
  // expected ans = 4 -> 4 > 3
  cout << maximumCount(v) << endl;
  return 0;
}
