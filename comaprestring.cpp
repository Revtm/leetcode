#include<bits/stdc++.h>
using namespace std;

string removeDigit(string number, char digit) {
    priority_queue<string> p;

    for( int i = 0; i < number.size() ; i++){
        string copyNum = number;
        if(number[i] == digit){
            copyNum.erase(i, 1);
            cout << copyNum << endl;
            p.push(copyNum);
        }
    }

    return p.top();

}

string removeDigit2(string number, char digit) {
    string maxStr = "0";

    for( int i = 0; i < number.size() ; i++){
        string copyNum = number;
        if(number[i] == digit){
            copyNum.erase(i, 1);
            maxStr = max(maxStr, copyNum);
        }
    }

    return maxStr;

}

int main(){
    string a = "512131";
    cout << removeDigit(a, '1');

    return 0;
}

