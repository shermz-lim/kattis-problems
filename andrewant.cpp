#include <bits/stdc++.h>

using namespace std;

void print_ans(int t, string pos){
    cout<<"The last ant will fall down in "<<t<<" seconds - started at "<<pos<<"."<<endl;
}

int main(){
    string line;
    while(getline(cin,line)){
        istringstream sin(line);
        int l,a;
        sin>>l>>a;
        vector<int> left;
        vector<int> right;
        vector<int> all;
        while(a--){
            getline(cin,line);
            istringstream sin(line);
            int i; char dir;
            sin>>i>>dir;
            if(dir=='L'){
                left.push_back(i);
            }else{
                right.push_back(i);
            }
            all.push_back(i);
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        sort(all.begin(), all.end());
        if(left.size()==0){
            print_ans(l-right.front(), to_string(right.front())); 
        }else if(right.size()==0){
            print_ans(left.back(), to_string(left.back()));
        }else{
            int left_max=left.back();
            int right_max=l-right.front();
            int p=all[left.size()-1];
            int q=all[all.size()-right.size()];
            if(left_max>right_max){
                print_ans(left_max, to_string(p));
            }else if(left_max<right_max){
                print_ans(right_max, to_string(q));
            }else{
                int first=min(p,q);
                int second=max(p,q);
                print_ans(left_max, to_string(first) + " and " + to_string(second));
            }
        }
    }
}
