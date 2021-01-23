#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

vector<string> zero={
    "+---+",
    "|   |",
    "|   |",
    "+   +",
    "|   |",
    "|   |",
    "+---+",
};
vector<string> one={
    "    +",
    "    |",
    "    |",
    "    +",
    "    |",
    "    |",
    "    +"
};
vector<string> two={
    "+---+",
    "    |",
    "    |",
    "+---+",
    "|    ",
    "|    ",
    "+---+",
};
vector<string> three={
    "+---+",
    "    |",
    "    |",
    "+---+",
    "    |",
    "    |",
    "+---+",
};
vector<string> four={
    "+   +",
    "|   |",
    "|   |",
    "+---+",
    "    |",
    "    |",
    "    +",
};
vector<string> five={
    "+---+",
    "|    ",
    "|    ",
    "+---+",
    "    |",
    "    |",
    "+---+",
};
vector<string> six={
    "+---+",
    "|    ",
    "|    ",
    "+---+",
    "|   |",
    "|   |",
    "+---+",
};
vector<string> seven={
    "+---+",
    "    |",
    "    |",
    "    +",
    "    |",
    "    |",
    "    +",    
};
vector<string> eight={
    "+---+",
    "|   |",
    "|   |",
    "+---+",
    "|   |",
    "|   |",
    "+---+",
};
vector<string> nine={
    "+---+",
    "|   |",
    "|   |",
    "+---+",
    "    |",
    "    |",
    "+---+"
};


int main() {
    vector<string> numbers[10];
    numbers[0]=zero;
    numbers[1]=one;
    numbers[2]=two;
    numbers[3]=three;
    numbers[4]=four;
    numbers[5]=five;
    numbers[6]=six;
    numbers[7]=seven;
    numbers[8]=eight;
    numbers[9]=nine;
    string line;
    while(getline(cin, line)){
        if(line=="end") break;
        istringstream sin(line);
        char a,b,c,d;
        sin>>a>>b>>c>>c>>d;
        for(int i=0;i<7;i++){
            cout<<numbers[a-'0'][i]<<"  ";
            cout<<numbers[b-'0'][i];
            if(i==2||i==4){
                cout<<"  o  ";
            }else{
                cout<<"     ";
            }
            cout<<numbers[c-'0'][i]<<"  ";
            cout<<numbers[d-'0'][i]<<endl;
        }
        cout<<endl<<endl;
    }
    cout<<"end"<<endl;
}