#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int c=0,d=0;
    vector<int> e;
    if(a0>b0)c=c+1;
    if(a0<b0)d=d+1;
    if(a1>b1)c=c+1;
    if(a1<b1)d=d+1;
    if(a2>b2)c=c+1;
    if(a2<b2)d=d+1;
    e.push_back(c);
    e.push_back(d);
    return e;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
