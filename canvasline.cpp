#include <bits/stdc++.h>

using namespace std;

int count(list<int>::iterator curr_peg, list<int> &pegs, pair<int,int> &canvas){
    int count=0;
    while(curr_peg!=pegs.end()&&*curr_peg>=canvas.first&&*curr_peg<=canvas.second){
        curr_peg++;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > canvases;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        canvases.push_back(make_pair(l,r));
    }
    int p;
    cin>>p;
    list<int> pegs;
    for(int i=0;i<p;i++){
        int pi; cin>>pi;
        pegs.push_back(pi);
    }
    list<int>::iterator curr_peg=pegs.begin();
    vector<int> inserted_pegs;
    for(int i=0;i<canvases.size();i++){
        auto canvas=canvases[i];
        while(curr_peg!=pegs.end()&&*curr_peg<canvas.first){
            curr_peg++;
        }
        int c1=count(curr_peg, pegs, canvas);
        if(c1>2){
            cout<<"impossible"<<endl;
            return 0;
        }
        if(c1==0){
            inserted_pegs.push_back(canvas.first+1);
            if(i<(pegs.size()-1)&&count(curr_peg,pegs,canvases[i+1])>=2){
                inserted_pegs.push_back(canvas.second-1);
            }else{
                inserted_pegs.push_back(canvas.second);
                curr_peg=pegs.insert(curr_peg,canvas.second);
            }
        }else if(c1==1){
            if((*curr_peg==canvas.second)||(i<(pegs.size()-1)&&count(next(curr_peg,1),pegs,canvases[i+1])>=2)){
                inserted_pegs.push_back(*curr_peg==(canvas.second-1)?(canvas.second-2):(canvas.second-1));
            }else{
                inserted_pegs.push_back(canvas.second);
                curr_peg=pegs.insert(next(curr_peg,1),canvas.second);
            }
        }
    }
    cout<<inserted_pegs.size()<<endl;
    for(int i=0;i<inserted_pegs.size();i++){
        if(i>0) cout<<" ";
        cout<<inserted_pegs[i];
    }
    cout<<endl;
}
