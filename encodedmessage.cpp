#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    int n;
    cin>>n;
    getline(cin, line);
    for (int i=0;i<n;i++){
        getline(cin, line);
        int m = (int) sqrt(line.size());
        istringstream sin(line);
        char arr[m][m];
        for (int j=0;j<m;j++){
            for (int k=0;k<m;k++){
                char c;
                sin>>c;
                arr[j][k] = c;
            }
        }
        for (int j=m-1;j>=0;j--){
            for (int k=0;k<m;k++){
                cout<<arr[k][j];
            }
        }
        cout<<endl;        
    }
}