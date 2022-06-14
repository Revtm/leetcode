#include<bits/stdc++.h>
using namespace std;

int minTime(int S1, int S2, int N){
    if(S1 > S2) swap(S1, S2);
    int low = 0;
    int hi = N;
    int mid;
    int minimum = S1*N;

    while(low <= hi){
        mid = low + (hi-low)/2;

        int p1 = S1*mid;
        int p2 = S2*(N-mid);
        int pmax = max(p1,p2);
        minimum = min(minimum, pmax);

        if(p1 <= p2){
            low = mid+1;
        }else{
            hi = hi-1;
        }
    }

    return minimum;

}

int main(){
    cout << minTime(1,3,2);
    return 0;
}
