#include<bits/stdc++.h>
using namespace std;


//vector<int> c = {8,15,10,20,8};
//int child = 2;
int distributeCookies(vector<int>& cookies, int k) {
     vector<int> child(k,0);

     sort(cookies.begin(), cookies.end());
     int j = 1;

     for(int i = 0 ; i < cookies.size() ; i++){
         if(j < k){
            if(child[j-1]+cookies[i] < child[j]){
                child[j-1] += cookies[i];
            }else{
                child[j] += cookies[i];
            }
            j++;
         }else{
            j = 0;
         }
     }

     sort(child.begin(), child.end());

     return child[k-1];

}

int main(){
    vector<int> c = {8,15,10,20,8};
    int child = 2;

    cout << distributeCookies(c, child);
}
