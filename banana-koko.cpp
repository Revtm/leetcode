#include<bits/stdc++.h>
using namespace std;

//Input: piles = [3,6,7,11], h = 8
//Output: 4
int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(), piles.end());
    int n = piles.size();
    int low = 1;
    int hi = piles[n-1];
    int mid;

    while(low < hi){
        mid = low + (hi-low)/2;

        int time = 0;
        for(int i : piles){
            if(i%mid == 0){
                time = time + (i/mid);
            }else if(i%mid == i){
                time++;
            }else{
                time = time + (i/mid) + 1;
            }
        }


        if(time <= h){
            hi = mid;
        }else{
            low = mid+1;
        }
    }

    return hi;

}

int main(){
    vector <int> a = {3,6,7,11};
  
    int h = 8;
    cout << minEatingSpeed(a,h);
    return 0;
}
