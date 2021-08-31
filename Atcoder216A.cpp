//ac
#include<iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string determineClass(int answer) {
   if(answer<=2){
       return "-";
   }else if(answer<=6){
       return "";
   }else{
       return "+";
   }
}

int main(){
    string input,refined="";
    string totake;
    getline(cin, input);
    for(int i=0;i<input.length();i++){
        if(input[i]== '.'){
        totake = input[i+1];
        break;
        }

       refined+=(input[i]);
    }
    cout<<refined+determineClass(stoi(totake))<<endl;
}