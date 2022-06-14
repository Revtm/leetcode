#include<bits/stdc++.h>
using namespace std;

int binSearch(int arrSort[], int low, int hi, int x){
    int mid = low + (hi-low)/2;

    if(hi >= low){
        if(arrSort[mid] == x){
            return mid;
        }

        if(x < arrSort[mid]){
            return binSearch(arrSort, low, mid-1, x);
        }

        if(x > arrSort[mid]){
            return binSearch(arrSort, mid+1, hi, x);
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,2,5,7,8,9,10,15,16,30,32,35,60,70,72,73,80,81,87,93,101};
    int x = 16;
    int n = sizeof(arr)/sizeof(arr[0]);

    int idx = binSearch(arr, 0, n-1, x);
    cout << idx;
    return 0;
}
