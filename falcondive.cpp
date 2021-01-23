#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n; string line;
    cin>>m>>n>>line;
    char c=line[1];
    char first[m][n];
    char second[m][n];
    vector<pair<int,int> > first_fal;
    vector<pair<int,int> > second_fal;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>first[i][j];
            if(first[i][j]==c){
                first_fal.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>second[i][j];
            if(second[i][j]==c){
                second_fal.push_back(make_pair(i,j));
            }
        }
    }
    vector<pair<int,int> > third_fal;
    for(int i=0;i<first_fal.size();i++){
        auto ff=first_fal[i];
        auto sf=second_fal[i];
        auto tf=make_pair(2*sf.first-ff.first,2*sf.second-ff.second);
        third_fal.push_back(tf);
    }
    char third[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(first[i][j]!=c){
                third[i][j]=first[i][j];
            }else{
                third[i][j]=second[i][j];
            }
        }
    }
    for(auto &tf:third_fal){
        int x=tf.first, y=tf.second;
        if(x>=0&&x<m&&y>=0&&y<n){
            third[x][y]=c;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<third[i][j];
        }
        cout<<endl;
    }
}
