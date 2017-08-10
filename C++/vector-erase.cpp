#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     vector<int> v;
   
    int i,n,a,b,c,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a;
        v.push_back(a);
    }
    cin>>b;
    v.erase(v.begin()+b-1);
    cin>>c>>d;
    v.erase(v.begin()+c-1,v.begin()+d-1);
    cout<<v.size()<<'\n';
    for(i=0;i<v.size();i++)
        cout<<v[i]<<' ';
    return 0;
}
