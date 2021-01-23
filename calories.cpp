#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    double caloriesPerGram[5]={9,4,4,4,7};
    while(1){        
        getline(cin, line);
        if(line=="-") break;
        double totCalories=0;
        double totFatCalories=0;
        while(1){
            istringstream sin(line);
            string nutrients[5];
            sin>>nutrients[0]>>nutrients[1]>>nutrients[2]>>nutrients[3]>>nutrients[4];
            double percent=0;
            double calories=0;
            for(int i=0;i<5;i++){
                string nutrient=nutrients[i];
                char unit=nutrient[nutrient.size()-1];
                double value=stoi(nutrient.substr(0,nutrient.size()-1));
                if(unit=='%'){
                    percent+=value;
                }else if(unit=='g'){
                    calories+=(value*caloriesPerGram[i]);
                }else{
                    calories+=value;
                }
            }
            calories=(100)/(100-percent)*calories;
            totCalories+=calories;
            string fat=nutrients[0];
            char fatUnit=fat[fat.size()-1];
            double fatValue=stoi(fat.substr(0,fat.size()-1));
            if(fatUnit=='%'){
                totFatCalories+=(calories*fatValue/100);
            }else if(fatUnit=='g'){
                totFatCalories+=(fatValue*caloriesPerGram[0]);
            }else{
                totFatCalories+=(fatValue);
            }
            getline(cin, line);
            if(line=="-") break;
        }
        cout<<(round(totFatCalories/totCalories*100))<<"%"<<endl;
    }
}