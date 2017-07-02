#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student 
    {
    private:
    int stu[5];
    int sum=0;
    public:
    Student(){
        stu[0]=0;
        stu[1]=0;
        stu[2]=0;
        stu[3]=0;
        stu[4]=0;
        sum=0;
    }
    void input(){
        cin>>stu[0]>>stu[1]>>stu[2]>>stu[3]>>stu[4];
        sum+=stu[0]+stu[1]+stu[2]+stu[3]+stu[4];
    }
    int calculateTotalScore(){
        return sum;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
