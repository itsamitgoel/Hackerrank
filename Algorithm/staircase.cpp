#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
         cout<<' ';
        }
        for(k=0;k<=i;k++)
        {
         cout<<'#';
        }
        cout<<'\n';
    }
    return 0;
}
