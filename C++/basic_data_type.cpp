#include <iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;;
    cout << std::fixed << std::setprecision(3) << e << '\n';
    cout << std::fixed << std::setprecision(9) << f << '\n';
    return 0;
}
