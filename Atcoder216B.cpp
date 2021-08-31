//ac
#include<iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int num,it=0,found=0;; 
    cin>>num;
    string input[num+1]; 
    num++;
    while(num--){
          getline(cin, input[it]);
          it++;
    }

    for (size_t i = 0; i < it; i++)
    {
        found=1;
        for (size_t j = i+1; j <  it; j++)
        {
            if(input[i]==input[j]){
                found++;
                cout<<"Yes";
                break;
            }
        }
        if(found>1)break;
    }
if(found<=1)cout<<"No";

}