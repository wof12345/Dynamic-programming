#include<iostream>
#include <bits/stdc++.h>

using namespace std;
stack <int> binary;

 int repeat(int globaltracker, int answer) {
    if(answer <= 0) return 0;

    int mod = answer%2;
    binary.push(mod);
    // cout<<binary.top();
    answer/=2;
    
    repeat(globaltracker, answer);

    return 0;
}

int main(){
    int tc=0;
  
    int number;
    cin>>tc;
    while (tc--)
    {
        cin>>number;
        repeat(0,number);

        while (binary.size()>0)
        {
             cout<<binary.top();
             binary.pop();
        }         
        
        // cout<<binary.top();
        cout<<endl;
    }   
}