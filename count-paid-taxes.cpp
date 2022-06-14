#include<bits/stdc++.h>
using namespace std;

//Input: brackets = [[3,50],[7,10],[12,25]], income = 10
//Output: 2.65000
/*
tax = 3 * 50%
tax = 7 - 3 * 10%
tax = 10 - 3 * 25%
*/
double calculateTax(vector<vector<int>>& brackets, int income) {
    double tax = 0;
    int i = 1;

    if(income == 0){
        return tax;
    }

    if(brackets[0][0] < income){
        tax += brackets[0][0] * (brackets[0][1]/100.0f);
    }else{
        tax += (income) * (brackets[0][1]/100.0f);
        return tax;
    }

    if(brackets.size() > 1){
        do{
            if(brackets[i][0] < income){
               tax += (brackets[i][0] - brackets[i-1][0]) * (brackets[i][1]/100.0f);
               i++;
            }
            if(brackets[i][0]>= income){
                tax += (income - brackets[i-1][0]) * (brackets[i][1]/100.0f);
            }
        }while(brackets[i][0] < income);

    }


    return tax;
}

int main(){
    vector<vector<int>>  test = {{4,8},{5,49}};
    int income = 2;

    cout << calculateTax(test, income);
}
