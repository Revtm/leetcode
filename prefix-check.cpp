#include<bits/stdc++.h>
using namespace std;

bool isPrefixString(string s, vector<string>& words) {
    for(int i = 0 ; i < words.size() ; i++){
        if(words[i].length() > s.length()){
            return false;
        }

        if(words[i] == s){
            return true;
        }else{
            if((i+1) < words.size()){
                words[i+1] = words[i] + words[i+1];
            }
        }
    }

    return false;
}

int main(){
    string s = "iloveleetcode";
    vector<string> words = {"apple","love","leetcode","apples"};

    cout << isPrefixString(s, words);
    return 0;
}
