#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int k;
    cin>>k;
    int idx;
    for(int i=1;i<=k;i++){
        int totalSteps=0;
        int students[20];
        cin>>idx;
        for(int j=0;j<20;j++){
            cin>>students[j];
        }
        int numSorted=0;
        vector<int> sortedStudents(20, INT_MAX);
        for(int j=0;j<20;j++){
            int student=students[j];
            int x=0;
            while(x<20){
                if(sortedStudents[x]>student){
                    break;
                }else{
                    x++;
                }
            }
            int last=numSorted;
            while(last>x){
                sortedStudents[last]=sortedStudents[last-1];
                last--;
                totalSteps++;
            }
            sortedStudents[x]=student;
            numSorted++;
        }
        cout<<idx<<" "<<totalSteps<<endl;
    }
}