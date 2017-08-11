#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,s=0,s1=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
for(j=0;j<n;j++){
    cin>>a[i][j];
}
    }
   
for(j=0;j<n;j++){
    s=s+a[j][j];
}
  for(j=0;j<n;j++){
    s1=s1+a[j][n-j-1];
}
    cout<<abs(s-s1);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
