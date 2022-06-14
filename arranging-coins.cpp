#include<bits/stdc++.h>
using namespace std;

int arrangeCoinsB(int n) {
    int low = 0;
    int hi = n;
    int mid;

    if(low <= hi){
        mid = low + (hi+low)/2;

        if((mid*(mid+1))/2 > n){
            hi = mid-1;
        }else if((mid*(mid+1))/2 < n){
            low = mid+1;
        }else{
            return mid;
        }
    }

    return hi;

}

int arrangeCoins(int n) {
    int i = 0, total = 0;
    int sisa = n;
    while(i <= sisa){
        total += i;
        sisa = n-total;
        if((i+1) <= sisa)i++;
    }
    return i;
}
//*
//**
//**

int main(){
   cout << arrangeCoins(9);
    return 0;
}
