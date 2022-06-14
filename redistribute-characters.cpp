#include<bits/stdc++.h>
using namespace std;

bool makeEqual(vector<string>& words) {
    int n = words.size();
    if(n == 1){
        return true;
    }

    unordered_map<char, int> charMap;
    for(string i : words){
        for(char c : i){
            charMap[c]++;
        }
    }

    for(auto &j : charMap){
        if(j.second%n != 0){
            return false;
        }
    }

    return true;
}

int main(){
    vector<string> test = {"abc", "aabc", "bc"};
    cout << makeEqual(test);
}
