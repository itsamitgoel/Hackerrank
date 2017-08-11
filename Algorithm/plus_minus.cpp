#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>// very important for set precision//
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,i;
    double p=0,n1=0,z=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>0)p+=1;
        if(a<0)n1+=1;
        if(a==0)z+=1;
    }
    
    cout<<setprecision(6)<<p/n<<'\n';
    cout<<setprecision(6)<<n1/n<<'\n';
    cout<<setprecision(6)<<z/n<<'\n';
    return 0;
}
