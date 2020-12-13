#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while (getline(cin, line)){
        if (line=="") break;
        string token;
        istringstream sin(line);
        vector<string> name;
        vector<float> hrs;
        while(sin>>token){
            if(token[0]-'0'<=9){
                hrs.push_back(stof(token));
            }else{
                name.push_back(token);
            }
        }
        float tot=0;
        for(int i=0;i<hrs.size();i++) tot+=hrs[i];
        cout<<(tot/hrs.size())<<" ";
        for(int i=0;i<name.size();i++){
            cout<<name[i];
            if(i!=(name.size()-1)) cout<<" ";
        }
        cout<<endl;
    }
}