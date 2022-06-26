#include<bits/stdc++.h>
using namespace std;

bool isAnagramNestedLoop(string a, string b){
    int nSame = 0;
    int nA = a.size();
    int nB = b.size();

    if(nA != nB){
        return false;
    }else if(a == b){
        return true;
    }else{
        for(int i = 0 ; i < nA ; i++){            // n
            for(int j = 0 ; j < nB ; j++){        // n
                if(a[i] == b[j]){                 // ---------------
                    nSame++;                      // n x n = n^2
                    a[i] = '_';
                    b[j] = '*';
                }
            }
        }
    }

    return (nSame == nA);
}

bool isAnagramMap(string a, string b){
    map<char, int> aM;
    map<char, int> bM;
    int nA = a.size();
    int nB = b.size();

    if(nA != nB){
        return false;
    }else if(a == b){
        return true;
    }else{
        for(int i = 0 ; i < nA ; i++){    // n
            aM[a[i]]++;
            bM[b[i]]++;
        }

        for(int j = 0 ; j < nA ; j++){    // n
            if(aM[a[j]] != bM[a[j]]){
                return false;
            }
        }                                       // ------------
    }                                           // n + n = 2n

    return true;
}

bool isAnagramSort(string a, string b){
    int nA = a.size();
    int nB = b.size();

    if(nA != nB){
        return false;
    }else if(a == b){
        return true;
    }else{
        sort(a.begin(), a.end());       // n log n
        sort(b.begin(), b.end());       // n log n
    }                                   // ---------
                                        // 2n log n
    return(a == b);
}


int main(){
    cout << isAnagramSort("aan", "ana");
    return 0;
}
