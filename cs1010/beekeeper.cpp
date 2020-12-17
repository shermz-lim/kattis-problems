#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    string vowels="aeiouy";
    while(1){
        cin>>n;
        if(n==0) break; 
        int maxCount=INT_MIN;
        string bestWord;       
        for(int i=0;i<n;i++){
            string word;
            cin>>word;
            int count=0;
            for(int j=0;j<word.size()-1;j++){
                if(word[j]==word[j+1]&&vowels.find(word[j])!=string::npos){
                    count++;
                }
            }
            if(count>maxCount){
                maxCount=count;
                bestWord=word;
            }
        }
        cout<<bestWord<<endl;
    }
}