#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while(getline(cin, line)){
        istringstream sin(line);
        int x;
        vector<int> numbers;
        while(sin>>x){
            numbers.push_back(x);
        }
        sort(numbers.begin(),numbers.end());
        int n=numbers[numbers.size()-1];
        int distances[n+1];
        for(int i=0;i<n+1;i++) distances[i]=0;
        for(int i=0;i<numbers.size()-1;i++){
            for(int j=i+1;j<numbers.size();j++){
                distances[numbers[j]-numbers[i]]++;
            }
        }
        bool perfect=true,valid=true;
        vector<int> missing;
        for(int i=1;i<=n;i++){
            if(distances[i]==0){
                perfect=false;
                missing.push_back(i);
            }else if(distances[i]>1){
                valid=false;
            }
        }
        if(valid&&perfect){
            cout<<"perfect"<<endl;
        }else if(valid){
            cout<<"missing ";
            for(int i=0;i<missing.size();i++){
                cout<<missing[i];
                if(i!=missing.size()-1)cout<<" ";
            }
            cout<<endl;
        }else{
            cout<<"not a ruler"<<endl;
        }
    }
}