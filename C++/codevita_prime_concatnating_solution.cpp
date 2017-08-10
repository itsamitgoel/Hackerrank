   
/**
 
 * Please write your code in this editor. 
 * Operational instructions
 * 1) Press F5 If you don't see your saved code
 * 2) You can change the font, background, foreground of this editor by clicking on the right hand side bottom
 * 4) Prefer Google Chrome (version 25 or above) or Firefox (version 21 or above)
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
#include<sstream>
using namespace std;

int main() {   
    vector<int> allprimes;
    vector<string> concatprimes;
    vector<int> concatprimes1;
    vector<int> finalprimes;
    int n,i,j,a=0,b=0,c=1,array_size,concatarray_size,finalarray_size;
    cin>>n;
    if(n==0||n==1)
    cout<<0;
    else
    {
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
        
        if(i%j==0)
        a+=1;
        }
        if(a==1){
            allprimes.push_back(i);
        }
        a=0;
    }
    array_size=allprimes.size();
    for(i=0;i<array_size;i++)
    {
        for(j=0;j<=array_size;j++)
        {
            concatprimes.push_back(std::to_string(allprimes[i]) + std::to_string(allprimes[j]));
        }
    }
    concatarray_size=concatprimes.size();
    for ( i=0; i<concatprimes.size() ; i++)
    {
    	stringstream geek(concatprimes[i]);
    int x = 0;
    geek >> x;
     concatprimes1.push_back(x);
    }
    for(i=0;i<concatarray_size;i++)
    {
        for(j=2;j<=concatprimes1[i];j++)
        {
        
        if(concatprimes1[i]%j==0)
        b+=1;
        }
        if(b==1){
            finalprimes.push_back(i);
        }
        b=0;
    }
    finalarray_size=finalprimes.size();
    sort(finalprimes.begin(),finalprimes.end());
    for(i=0;i<finalprimes.size()-1;i++)
    {
        if(finalprimes[i]!=finalprimes[i+1])
        {
       // finalprimes.erase(i);
       c=c+1;
        }
        
    }
    //cout<<finalprimes.size();
    cout<<c;
    }
}

        
    
    
        
    
        
        