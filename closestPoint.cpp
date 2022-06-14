#include<bits/stdc++.h>
using namespace std;

class comparepoint{
public:
    bool operator()(vector<int> a, vector<int> b){
        float aL = sqrt((pow(a[0], 2.0) + pow(a[1],2.0)));
        float bL = sqrt((pow(b[0], 2.0) + pow(b[1],2.0)));
        return (aL > bL);
    }
};

struct structcompares {
  bool operator()(vector<int> a, vector<int> b){
        float aL = sqrt((pow(a[0], 2.0) + pow(a[1],2.0)));
        float bL = sqrt((pow(b[0], 2.0) + pow(b[1],2.0)));
        return (aL > bL);
    }
} veccompare;

vector<vector<int>> kClosest0(vector<vector<int>>& points, int k) {
    priority_queue<vector<int>, vector<vector<int>>, comparepoint> closest;
    vector<vector<int>> closestVec;

    for(vector<int> point : points){
        closest.push(point);
    }

    for(int i = 0 ; i < k ; i++){
        closestVec.push_back(closest.top());
        closest.pop();
    }

    return closestVec;
}


vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    make_heap(points.begin(), points.end(), veccompare);
    vector<vector<int>> closestVec;

    while(points.size() > k){
        points.pop_back();
    }

    return points;
}

int main(){
    vector<vector<int>> points = {{1,3},{-2,2}, {3,2}};
    vector<vector<int>> closest = kClosest(points, 2);

    for(vector<int> x : closest){
        cout << "[" << x[0] << "," << x[1] << "]";
    }
    return 0;
}

