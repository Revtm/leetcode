#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = i+1;

    while(j < n){
        if(nums[i] == 0){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }else{
                j++;
            }
        }else{
            i++;
            j++;
        }
    }
}

int main(){
    vector <int> test = {0,1,0,3,12}; // [1,3,12,0,0]
    vector <int> test2 = {0}; // [0]

    moveZeroes(test);
    moveZeroes(test2);

    for(int i : test){
        cout << i << " ";
    }

    cout << endl;

    for(int i : test2){
        cout << i << " ";
    }
    return 0;
}
