#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<vector<int>> nvec;
    int i,j,value,k,which,index_j,n,q;
    cin>>n>>q;
    
    for(i=0;i<n;++i)
        {
        cin>>k;
        vector<int> kvec;
        for(j=0;j<k;++j)
            {
            cin>>value;
            kvec.push_back(value);
        }
        nvec.push_back(kvec);
            
    }
    for(i=0;i<q;++i)
        {
        cin>>which>>index_j;
        cout<<nvec[which][index_j]<<'\n';
    }
    return 0;
}
