#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string name,pss,dob;
        int c;
        cin>>name>>pss>>dob>>c;
        cout<<name<<" ";
        if ((stoi(pss.substr(0,4)) >= 2010) || (stoi(dob.substr(0,4)) >= 1991)) {
            cout<<"eligible";
        } else if (c>=41){
            cout<<"ineligible";
        } else {
            cout<<"coach petitions";
        }
        cout<<endl;
    }
}