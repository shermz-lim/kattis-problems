#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

vector<pair<int,int> > dirs={
    {1,0},
    {-1,0},
    {0,1},
    {0,-1}
};

void solve() {    
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<bool> > visited(r, vector<bool>(c, false));
    int ccs=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){            
            if(arr[i][j]=='L'&&!visited[i][j]){
                visited[i][j]=true;
                ccs++;
                queue<pair<int,int> > q;
                q.push(make_pair(i,j));
                while(!q.empty()){
                    auto ij=q.front();
                    q.pop();
                    for(auto dir:dirs){
                        int x=dir.first+ij.first;
                        int y=dir.second+ij.second;
                        if(x>=0&&x<r&&y>=0&&y<c&&!visited[x][y]){
                            if(arr[x][y]=='L'||arr[x][y]=='C'){
                                visited[x][y]=true;
                                q.push(make_pair(x,y));
                            }
                        }
                    }
                }
            }
        }
    }    
    cout<<ccs<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}