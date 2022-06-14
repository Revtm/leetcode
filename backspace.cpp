#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char>stack_s;
    stack<char>stack_t;

    for(char c : s){
        if(c != '#'){
            stack_s.push(c);
        }else{
            if(!stack_s.empty())stack_s.pop();
        }
    }

    for(char c : t){
        if(c != '#'){
            stack_t.push(c);
        }else{
            if(!stack_t.empty())stack_t.pop();
        }
    }

    while(!stack_s.empty() && !stack_t.empty()){
        if(stack_s.top() == stack_t.top()){
            stack_s.pop();
            stack_t.pop();
        }else{
            return false;
        }
    }

    return (stack_s.empty() && stack_t.empty());
}

int main(){
    cout << backspaceCompare("ab","ac#b");
    return 0;
}

