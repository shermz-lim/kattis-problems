#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    int sz=(line.size()+1)/4;
    string arr[sz][5];
    string validCodes[10][5] = {
        {
            "***",
            "* *",
            "* *",
            "* *",
            "***"
        },
        {
            "  *",
            "  *",
            "  *",
            "  *",
            "  *"
        },
        {
            "***",
            "  *",
            "***",
            "*  ",
            "***"
        },
        {
            "***",
            "  *",
            "***",
            "  *",
            "***"
        },
        {
            "* *",
            "* *",
            "***",
            "  *",
            "  *"
        },
        {
            "***",
            "*  ",
            "***",
            "  *",
            "***"
        },
        {
            "***",
            "*  ",
            "***",
            "* *",
            "***"
        },
        {
            "***",
            "  *",
            "  *",
            "  *",
            "  *"
        },
        {
            "***",
            "* *",
            "***",
            "* *",
            "***"
        },
        {
            "***",
            "* *",
            "***",
            "  *",
            "***"
        }
    };
    for(int i=0;i<5;i++){
        int j=0;
        int wordidx=0;
        while(j<line.size()){
            string row="";
            for(int k=j;k<j+3;k++){
                row.push_back(line[k]);
            }
            arr[wordidx][i]=row;
            wordidx++;
            j+=4;
        }
        getline(cin, line);
    }
    int codes=0;    
    for(int i=0;i<sz;i++){
        int code=-1;
        for(int widx=0;widx<10;widx++){
            bool isThis=true;
            for(int j=0;j<5;j++){
                if(arr[i][j]!=validCodes[widx][j]){
                    isThis=false;
                    break;
                }
            }
            if(isThis){
                code=widx; break;
            }
        }
        if(code<0){
            codes=-1;
            break;
        }else{
            codes=codes*10+code;
        }
    }
    cout<<(codes%6==0?"BEER!!":"BOOM!!")<<endl;
}