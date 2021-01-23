#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Person{
    string name;
    vector<string> classes;
};

bool comp(Person p1,Person p2){
    int i=0,j=0;
    while(i<p1.classes.size()||j<p2.classes.size()){
        string p1Class=i<p1.classes.size()?p1.classes[i]:"middle";
        string p2Class=j<p2.classes.size()?p2.classes[i]:"middle";
        if(p1Class==p2Class){
            i++;j++;
        }else{
            return p1Class>p2Class;
        }
    }
    return p1.name<p2.name;
}

void solve() {
    int n;
    cin>>n;
    string line; getline(cin,line);
    vector<Person> persons;
    for(int i=0;i<n;i++){
        string line,name;
        getline(cin,line);
        istringstream sin(line);
        sin>>name; name=name.substr(0,name.size()-1);
        string clasStr; sin>>clasStr;
        vector<string> classes;
        int start=0,end=clasStr.find('-');
        while(end!=string::npos){
            classes.push_back(clasStr.substr(start,end-start));
            start=end+1;
            end=clasStr.find('-',start);
        }
        classes.push_back(clasStr.substr(start,end));
        reverse(classes.begin(),classes.end());
        Person p={name,classes};
        persons.push_back(p);
    }
    sort(persons.begin(),persons.end(),comp);
    for(int i=0;i<persons.size();i++){
        cout<<persons[i].name<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
        cout<<"=============================="<<endl;
    }
}