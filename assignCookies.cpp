#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    int content = 0;
    int i = 0;
    int j = 0;

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    if(s.size() == 0){
        return content;
    }

    while(i < g.size() && j < s.size()){
        if(s[j] >= g[i]){
            i++;
            j++;
            content++;
        }else{
            j++;
        }
    }

    return content;
}

int main(){
    vector<int> g = {5,9,8};
    vector<int> s = {7,6,1,8,9};

    cout << findContentChildren(g, s);
}

//[10,9,8,7]
//[5,6,7,8]



