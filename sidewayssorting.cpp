#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool compare(string word1, string word2){
    string newword1="",newword2="";
    for(int i=0;i<word1.size();i++){
        newword1.push_back(tolower(word1[i]));
        newword2.push_back(tolower(word2[i]));
    }
    return newword1<newword2;
}

int main() {
    int r,c;
    bool first=true;
    while(1){
        cin>>r>>c;
        if(r==0&&c==0) break;
        if(first) {
            first=!first;
        }else{
            cout<<endl;
        }
        char arr[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        vector<string> words;
        for(int i=0;i<c;i++){
            string word="";
            for(int j=0;j<r;j++){
                word.push_back(arr[j][i]);
            }
            words.push_back(word);
        }
        sort(words.begin(), words.end(), compare);
        for(int i=0;i<words.size();i++){
            string word=words[i];
            for(int j=0;j<r;j++){
                arr[j][i]=word[j];
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}