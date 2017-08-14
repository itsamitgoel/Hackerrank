#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    long sum = 0;
        long min = 1000000000;
        long max = 0;
    for(int i=0;i<5;i++)
    {
     cin>>n;
        sum = sum + n;
            if (min > n) {
                min = n;
            }
            if (max < n) {
                max = n;
            }
    }
    
    cout<<sum-max<<' '<<sum-min<<endl;
    
    return 0;
}
