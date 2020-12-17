#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    vector<string> movements = {"Forward", "Right", "Left"};
    int targetX,targetY;
    cin>>targetX>>targetY;
    int n;
    cin>>n;
    vector<string> instructions;
    for(int i=0;i<n;i++){
        string line;
        cin>>line;
        instructions.push_back(line);
    }
    bool done=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            string instruction=movements[j];
            if(instruction!=instructions[i]){
                // run simulation
                int x=0; int y=0; int dir=0;
                for(int k=0;k<n;k++){
                    string thisInstruction=instructions[k];
                    thisInstruction=k==i?instruction:thisInstruction;
                    if(thisInstruction=="Left"){
                        dir=dir-1;
                        if(dir<0) dir=3;
                    }else if(thisInstruction=="Right"){
                        dir=(dir+1)%4;
                    }else{
                        if(dir==0){
                            y++;
                        }else if(dir==1){
                            x++;
                        }else if(dir==2){
                            y--;
                        }else{
                            x--;
                        }
                    }
                }
                if(x==targetX&&y==targetY){
                    done=true;
                    cout<<(i+1)<<" "<<instruction<<endl;
                    break;
                }
            }
        }
        if(done) break;
    }
}