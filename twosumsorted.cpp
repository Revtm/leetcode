#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
    int i = 0;
    int j = numbers.size()-1;
    vector<int> ans;
    int sum;

    while(i < j){
      sum = numbers[i] + numbers[j];
      if(sum == target){
        ans.push_back(i + 1);
        ans.push_back(j + 1);
        break;
      }else if(sum > target){
        j--;
      }else{
        i++;
      }
    }

    return ans;
}

int main() {
  vector<int> v{2,7,11,15};

  vector<int> ans = twoSum(v, 9);
  cout << "[";
  for(int a : ans){
    cout << " " << a << " ";
  }
  cout << "]";

  return 0;
}
