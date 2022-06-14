#include<bits/stdc++.h>
using namespace std;

//Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
//Output: [-1,3,-1]
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector <int> great;
    unordered_map<int,int> mapNums2;

    for(int i = 0 ; i < nums2.size() ; i++){
        int j = i;
        mapNums2[nums2[i]] = -1;

        while(j < nums2.size()){
            if(nums2[i] < nums2[j]){
                mapNums2[nums2[i]] = nums2[j];
                break;
            }
            j++;
        }
    }

    for(int i = 0 ; i < nums1.size() ; i++){
        great.push_back(mapNums2[nums1[i]]);
    }

    return great;
}

int main(){
    vector<int> nums1 = {1,3,5,2,4};
    vector<int> nums2 = {6,5,4,3,2,1,7};
    vector<int> hasil = nextGreaterElement(nums1, nums2);

    for(int i : hasil){
        cout << i << " ";
    }

    return 0;
}
