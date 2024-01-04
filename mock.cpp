/*
function -> input array [int] -> neg dan pos kecuali nol
output -> nilai tebesar dari 3 elemen
[1,2,3,4]
*/
//
// [-6,-3,-1,2,4,5]
//
// int max = -100000

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> arr){
  int max = -100000;
  int temp = 0;

  for(int i = 0 ; i < arr.size()-2 ; i++){
    for(int j = i+1 ; j < arr.size()-1 ; j++){
      for(int k = j+1 ; k < arr.size() ; k++){
        temp = arr[i] * arr[j] * arr[k];
        if(temp > max) max = temp;
      }
    }
  }

  return max;
}

int main(){
  vector<int> v {-4,-3,-2,-1};
  cout << maxSubArray(v)<< endl << endl;
  return 0;
}
