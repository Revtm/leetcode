#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  int s1 = nums1.size();
  int s2 = nums2.size();
  set<int> s;
  map<int, int> m;

  if(s1 > s2){
    for(int i = 0 ; i < s1 ; i++){
      m[nums1[i]]++;
    }

    for(int j = 0 ; j < s2 ; j++){
      if(m[nums2[j]] > 0){
        s.insert(nums2[j]);
      }
    }
  }else{
    for(int i = 0 ; i < s2 ; i++){
      m[nums2[i]]++;
    }

    for(int j = 0 ; j < s1 ; j++){
      if(m[nums1[j]] > 0){
        s.insert(nums1[j]);
      }
    }
  }

  vector<int> ans(s.begin(), s.end());
  return ans;
}

int main(){
  vector<int> a {4,9,5};
  vector<int> b {9,4,9,8,4};

  for(int i : intersection(a,b)){
    cout << i << endl;
  }
  return 0;
}
