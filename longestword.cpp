#include<bits/stdc++.h>
using namespace std;

string LongestWord(string sen) {
  string temp = "";
  string maxTemp;
  int n = 0;
  int maxN = -1;
  for(int i = 0 ; i <= sen.length() ; i++){
    if(isalpha(sen[i])){
        temp.append(&sen[i], 1);
    }else if(sen[i] == ' ' || i == sen.length()){
        n = temp.length();
        if(n > maxN){
            maxTemp = temp;
            maxN = n;
            temp = "";
            n = 0;
        }
    }
  }

  // code goes here
  return maxTemp;

}

int main(){
    string a = "a";
    string b = "b";

    cout << a+b"

    return 0;
}
