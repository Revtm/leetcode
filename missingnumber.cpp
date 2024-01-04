#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
  float n = nums.size()+1;
  float sum = (n/2)*((2*0)+((n-1)*1)); //arithmetic progression formula -> (n/2)*((2*a)+((n-1)*b))
  int numsSum = 0;
  for(int i = 0 ; i < n-1 ; i++){
    numsSum += nums[i];
  }

  return static_cast<int>(round(sum)) - numsSum;
}


int main() {
  vector<int> v {0,1,2,4};
  cout << missingNumber(v);
  return 0;
}
