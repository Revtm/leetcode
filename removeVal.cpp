#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {

    for(auto i = nums.begin() ; i < nums.end() ; i++){
        if(*i == val){
            nums.erase(i);
            i--;
        }
    }

    return nums.size();
}

int main(){
    vector<int>test={1,2,6,3,4,5,6,6,6,6,6,6};
    int val = 6;
    cout << removeElement(test, val);
    return 0;
}
