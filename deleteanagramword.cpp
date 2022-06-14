#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b){
    if(a.length() != b.length()){
        return false;
    }else{
        if(a == b){
            return true;
        }else{
            array<int, 26> h1;
            array<int, 26> h2;
            h1.fill(0);
            h2.fill(0);

            for(int i = 0 ; i < a.length() ; i++){
                h1[a[i] - 'a']++;
                h2[b[i] - 'a']++;
            }

            return (h1 == h2);
        }
    }
}

bool isAnagramSort(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return (a == b);
}

vector<string> removeAnagrams(vector<string>& words) {
    auto it = words.begin()+1;

    while(it < words.end()){
        if(isAnagram(*(it), *(it-1))){
            words.erase(it);
            continue;
        }
        it++;
    }

    return words;
}


int main(){

    vector<string> a = {"abba","baba","bbaa","cd","cd"};
    vector<string> b = removeAnagrams(a);

    for(string i : b){
        cout << i << ", ";
    }

    cout << endl << isAnagramSort("ada", "caa");
    return 0;
}
