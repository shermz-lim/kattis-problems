#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    string digits="0123456789ACDEFHJKLMNPRTVWX";
    unordered_map<char, char> mappings={
        {'B','8'}, {'G','C'}, {'I','1'}, {'O','0'}, {'Q','0'},
        {'S','5'}, {'U','V'}, {'Y','V'}, {'Z','2'},
    };
    int multiplier[8]={2,4,5,7,8,10,11,13};
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int k;
        cin>>k;
        ll decValue=0;
        int checkDigit=0;
        for(int j=0;j<8;j++){
            char x;
            cin>>x;
            if(mappings.find(x)!=mappings.end()){
                x=mappings.at(x);
            }
            int idx=digits.find(x);
            decValue+=(pow(27,7-j)*idx);
            checkDigit+=(idx*multiplier[j]);
        }
        checkDigit%=27;
        char actualDigit;
        cin>>actualDigit;
        int actualDigitVal=digits.find(actualDigit);
        cout<<k<<" ";
        if(actualDigitVal!=checkDigit){
            cout<<"Invalid";
        }else{
            cout<<decValue;
        }
        cout<<endl;
    }
}